/*  
    Write a program that has a few functions that perform the following tasks: 
 
        a) A function that takes in an integer n, representing the number of items, and an integer, 
        max, representing the maximum possible item, dynamically allocates an integer array of 
        size n where each number is randomly selected in between 1 and max, inclusive, and  
        returns a pointer to this newly created array. 
    
        b) A function that takes in an array and its size, and prints out the contents of the array. 
    
        c) A function that takes in an array and its size, and returns the maximum value in the 
        array. 
        
        d) A function that takes in an array and its size, and returns the average of the values in 
        the array. 
    Have your program call the  function to generate the array, and then, with this array, print it, its 
    maximum value and its average. Feel free to add other features to the program. At the end of the 
    program, free the memory for the array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *createRandomIntegerArray(int n, int max);
void printArray(int *array, int size);
int arrayMax(int *array, int size);
int arrayAvg(int *array, int size);

int main(void)
{
    int numItems = 10;
    int maxVal = 100;

    int *array = createRandomIntegerArray(numItems, maxVal);

    printArray(array, numItems);

    printf("The max of the array is %d and the average is %d\n",
           arrayMax(array, numItems), arrayAvg(array, numItems));

    free(array);
}

int *createRandomIntegerArray(int n, int max)
{
    int *array = calloc(n, sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < n; i++)
        array[i] = (1 + rand() % max);

    return array;
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    puts("");
}

int arrayMax(int *array, int size)
{
    int max = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

int arrayAvg(int *array, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += array[i];

    int avg = sum / size;
    return avg;
}
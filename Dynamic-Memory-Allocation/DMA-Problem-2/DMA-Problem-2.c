/*
    2) Design your own struct and dynamically allocate an array of that struct and populate the array 
    with values. Write functions that take in the array and its length, and return some information about 
    the array. (For example, if your structs were cars, you could have a function that returns the speed 
    of the fastest car.) At the end, free the array. 

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 99

typedef struct student
{
    char firstName[MAX_LEN];
    char lastName[MAX_LEN];
    int ID;
    double GPA;
} student;

int main(void)
{
}
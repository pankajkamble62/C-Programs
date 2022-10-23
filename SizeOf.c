/**********************
 Problem statement: Write a program to find the size of all different data types using sizeof operator.
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/


#include <stdio.h>
int main()
{
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu", sizeof(double));
    return 0;
}

/************************
 OUTPUT 

1
4
4
8

***************************/

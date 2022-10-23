
/**********************
 
 Problem statement: Write a program to implement string compare (strcmp).
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble

************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];    
    printf("Enter the first string\n");    
    gets(a);    

    printf("Enter the second string\n");    
    gets(b);
    
    if( strcmp(a,b) == 0 )
        printf("Entered strings are equal.\n");
    else
        printf("Entered strings are not equal.\n");
        return 0;
}

/********************************
 OUTPUT
 
Enter the first string
VIT
Enter the second string
VIT
Entered strings are equal.


Enter the first string
VIT
Enter the second string
Pune
Entered strings are not equal.

********************************/
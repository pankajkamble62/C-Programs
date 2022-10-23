
/**********************
 Problem statement: Write a program to implement string copy (strcpy).
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
    char source[] = "C Program"; 

    char destination[50];   

    strcpy(destination, source);

    printf("Source string: %s\n", source); 

    printf("Destination string: %s\n", destination);

    return 0;
}
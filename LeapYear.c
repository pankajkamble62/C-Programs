/**********************
 Problem statement: Write a program to find out leap year using conditional operator.
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/

#include<stdio.h>
void main()

{
    int year;

      printf(" \n Enter the Year \n ");
    
    scanf("%d" , &year);

    if 
    (( year%400 == 0)|| (( year%4 == 0 ) &&( year%100 != 0)))

      printf("\n %d is a Leap Year. \n", year);

    else
      printf("\n %d is not the Leap Year. \n", year); 
    
}


/*********************
 OUTPUT

Enter the Year
 2020

 2020 is a Leap Year.

*********************/
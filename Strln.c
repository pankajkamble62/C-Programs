
/**********************
 Problem statement: Write a program to implement string length function (strlen).
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/

#include <stdio.h>
#include <string.h>
 
int main()
{
  char Str[100];
  int Length;
 
  printf("\n Please Enter any String \n");
  gets (Str);
 
  Length = strlen(Str);
 
  printf("Length of a String = %d\n", Length);
 
  return 0;
}

/************************************
 
 OUTPUT

Please Enter any String 
Hello
Length of a String = 5

 ************************************/

/**********************
 Problem statement: Write a program to implement string concatenation (strcat).
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
  char a[100], b[100];

  printf("Enter the first string\n");
  gets(a);

  printf("Enter the second string\n");
  gets(b);

  strcat(a, b);

  printf("String obtained on concatenation: %s\n", a);

  return 0;

}


/********************************
 OUTPUT
 
Enter the first string
VIT
Enter the second string
Pune
String obtained on concatenation: VITPune

 ********************************/
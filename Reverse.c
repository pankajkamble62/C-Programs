
/**********************
 
 Problem statement : Write a program to reverse the given string (In-place logic)
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
  	char Str[100], RevStr[100];
  	int i, j, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
  	
  	j = 0;
  	len = strlen(Str);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';
 
  	printf("\n String after Reversing = %s", RevStr);
  	
  	return 0;
}
/********************************
 OUTPUT
 
 Please Enter any String :  PUNE

 String after Reversing = ENUP
 
 ********************************/
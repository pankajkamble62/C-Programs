/**********************
 Problem statement: Write a program to implement subtraction of matrices
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/
#include<stdio.h>
int main()

{

  int r, c, matrix1[100][100], matrix2[100][100], subtraction[100][100], i, j;
     printf("Enter the number of rows and columns : \n");
     scanf(" %d" " %d", &r, &c);
     
     printf("Input Matrix 1 elements : \n"); 

     for(i=0; i<r; ++i)

     for(j=0; j<c; ++j)

{
     
     scanf("%d",&matrix1[i][j]);

}
    printf("\n Matrix 1 \n");


    for(i=0;i<r;i++)
{
    
    for(j=0;j<c;j++)

{
    
    printf(" % d" ,matrix1[i][j]);

}

    printf("\n");

}

    printf("Input Matrix 2 elements : \n");

    for(i=0; i<r; ++i)

    for(j=0; j<c; ++j)
{

    scanf("%d", &matrix2[i][j]);

}
    printf("\n Matrix 2 \n");
 
    for(i=0;i<r;i++)

{
    
    for(j=0;j<c;j++)

{
    
    printf(" % d",matrix1[i][j]);

}
    
    printf("\n");

}
        // Subtracting Two matrices

    printf(" \n Subtracted Matrix\n ");

    for(i=0;i<r;++i)

    for(j=0;j<c;++j)
{
    
    subtraction [i][j] = matrix1[i][j] - matrix2[i][j];

}

    // print the result

   for(i=0;i<r;++i)
   
   for(j=0;j<c;++j)

{

   printf(" % d ",subtraction[i][j]);

   if(j==c-1)

{

   printf("\n");


}

}

  return 0;

}
/*************************************
  
OUTPUT

Enter the number of rows and columns : 
3
3
Input Matrix 1 elements : 
6
5
4
3
2
1
0
0
0

 Matrix 1
  6  5  4
  3  2  1
  0  0  0
Input Matrix 2 elements :
3
2
1
0
0
0
1
2
3

 Matrix 2
  6  5  4
  3  2  1
  0  0  0

 Subtracted Matrix
   3   3   3
  3   2   1
 -1  -2  -3

**************************************/
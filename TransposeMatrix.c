/**********************
 Problem statement: Write a program to implement transpose of matrices
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/

#include <stdio.h>
 
int main()
{
  int m, n, c, d, matrix[10][10], transpose[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");

  scanf("%d%d", &m, &n);

  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)

      scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)

      transpose[d][c] = matrix[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < m; d++)

      printf("%d\t", transpose[c][d]);
      
    printf("\n");
  }

  return 0;
}

/******************************
 
 OUTPUT

Enter the number of rows and columns of a matrix
2
3
Enter elements of the matrix
1 2 3
4 5 6
Transpose of the matrix:
1       4
2       5
3       6

 *****************************/
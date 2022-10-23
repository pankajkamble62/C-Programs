/**********************
 Problem statement: Write a program to implement multiplication of matrices
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/


#include <stdio.h>
 
int main()
{
  int m, n, p, q, c, d, k, sum = 0;

  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");

  scanf("%d %d", &m, &n);

  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)

    for (d = 0; d < n; d++)

      scanf("%d", &first[c][d]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d %d", &p, &q);
 

  
  {
    printf("Enter elements of second matrix\n");
 
    for (c = 0; c < p; c++)

      for (d = 0; d < q; d++)

        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++)
     {
      for (d = 0; d < q; d++) 
      {
        for (k = 0; k < p; k++) 
        {
          sum = sum + first[c][k] * second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
      
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}

/**************************************
 
 OUTPUT

 Enter number of rows and columns of first matrix
3 3
Enter elements of first matrix
1
2
3
4
5
6
7
8
9
Enter number of rows and columns of second matrix
3 3
Enter elements of second matrix
9
8
7
6 
5
4
3
2
1
Product of the matrices:
30      24      18
84      69      54
138     114     90

 *************************************/
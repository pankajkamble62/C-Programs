#include<stdio.h>
int main()

{

  int r, c, matrix1[100][100], matrix2[100][100], Multiplication[100][100], i, j;
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
    
    printf(" % d",matrix2[i][j]);

}
    
    printf("\n");

}
        // Multipliplying Two matrices

    printf(" \n Multiplied Matrix\n ");

    for(i=0;i<r;++i)

    for(j=0;j<c;++j)
{
    
   Multiplication [i][j] = matrix1[i][j] * matrix2[i][j];

}

    // print the result

   for(i=0;i<r;++i)
   
   for(j=0;j<c;++j)

{

   printf(" % d ",Multiplication[i][j]);

   if(j==c-1)

{

   printf("\n");


}

}

  return 0;

}
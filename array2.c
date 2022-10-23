
#include<stdio.h>


int main(){
    int a[5][5],b[5][5],c[5][5],row1,col1,row2,col2, sum=0;
    printf("Enter the number of rows and cols for matrix a:   ");
    scanf("  %d  %d",&row1,&col1);
 
    printf("enter the elements for a");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and cols elemts for matrix b:");
    scanf("%d %d",&row2,&col2);
   
    
    if (col1 != row2){
    printf("The multiplication isn't possible.\n");
    }
    else
   {
    printf("enter the elements for b:");
   }
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
          
          scanf("%d",&b[i][j]);
        }
    }
    for (int i = 0 ; i < row1 ; i++ )
        {
            for ( int j = 0 ; j < col2 ; j++ )
            {
                for ( int k = 0 ; k < row2 ; k++ )
                {
                    sum = sum + a[i][k]*b[k][j];
                }
 
                c[i][j] = sum;
                sum = 0;
            }
        }
    

        printf("multiplication of matrix a and b is");
        for(int i=0;i<row1;i++)
        {
            printf("\n");
        
        for(int j=0;j<col2;j++){
        printf("%d\t",c[i][j]);
         }
     }
     return 0;
        


    }
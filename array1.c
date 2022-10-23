#include<stdio.h>


int main(){
int i, j, size, key ;
int A[100];
printf("Enter the size of the array \n");
scanf("%d",&size);
printf("Enter the array \n ");
for(i=0;i<size;i++){
    scanf("%d",&A[i]);
}
for( i = 1 ; i < size ; i++ )
{
key = A[i];
j = i - 1;
while ( j >= 0 && A[j] > key )
{
A[j+1] = A[j];
j--;
}
A[j+1] = key;
}for(i=0;i<size;i++){
    printf("%d\t",A[i]);
}

return 0 ;
}

#include<stdio.h>
#include<math.h>
int main()

{
    long int n1=10 , n2=4,result;

    result=n1+n2;
    printf("\n\t Addition of %d + %d = %d",n1,n2,result);

    result=n1-n2;
    printf("\n\t Subtraction of %d - %d = %d",n1,n2,result);

    result= sqrt(n2);
    printf("\n\t Square root of %d = %d",n2,result);

    result= pow(n1,4);
    printf("\n\t Power of %d^%d = %d",n1,n2,result);

}

/****************************************************

Addition of 10 + 4 = 14
         Subtraction of 10 - 4 = 6
         Square root of 4 = 2
         Power of 10^4 = 10000
Process returned 0 (0x0)   execution time : 5.593 s
Press any key to continue.

*****************************************************/

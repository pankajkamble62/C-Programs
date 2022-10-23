#include <stdio.h>

int main()
{
    int i;

    /* Print ASCII values from 0 to 10 */
    for(i=0; i<=10; i++) 
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}
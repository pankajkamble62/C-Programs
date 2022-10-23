/********************************************************************
Problem statement: C Program on Double Pointers
**********************************************************************/
#include<stdio.h>
#include<stdlib.h>
void Sringlength(char**); // Case 2
void main()
{
    int ch,i,x,y;
    char ch1='y';
    do
    {
    printf("\n\t C program on Double Pointers ");
    printf("\n\t 1: Introduction to Double Pointer ");
    printf("\n\t 2: String Length Using Double Pointer");
    printf("\n\tEnter the choice =");
    scanf("%d",&ch);
    fflush(stdin);

    switch(ch)
    {
    case 1:
           printf("\n\t Case 1: Introduction to Double Pointer ");
           int SimpleVar = 999;
           int *sp;// Single pointer for Simple var
           int **dp,***tp;// double pointer for sp (Single Pointer)
           sp = &SimpleVar; // storing address of Simple var in sp
           dp = &sp;// Storing address of sp in dp
           tp=&dp;
           // Displaying value of SimpleVar using single and double pointers
            printf("\n\tValue of SimpleVar = %d", SimpleVar);
            printf("\n\tValue of SimpleVar using single pointer *sp = %d", *sp );
            printf("\n\tValue of SimpleVar using double pointer **dp= %d", **dp);
            printf("\n\tValue of SimpleVar using triple pointer ***tp= %d\n", ***tp);

            printf("\n\tSelf Address of SimpleVar = %d", &SimpleVar);
            printf("\n\tAddress stored in Single Pointer = %u", sp );
            printf("\n\tSelf Address of Single Pointer = %u", &sp );
            printf("\n\tAddress stored in Double pointer = %u", dp);
            printf("\n\tSelf Address of Double pointer = %u", &dp);
            printf("\n\tAddress stored in Triple pointer = %u", tp);
            printf("\n\tSelf Address of Triple pointer = %u", &tp);
           break;
    case 2:
           printf("\n\t Case 2: String Length Using Double Pointer\n\t");
           char* sp1="Test Me Using Double Pointer";
           char** dp1 = &sp1;
           Stringlength(dp1);
           break;
    default:
           printf("\n\t Wrong Choice");
    }
    printf("\nDo you want to repeat? (y/n)");
    scanf(" %c",&ch1);
    }while(ch1=='y');
}
void Stringlength(char **dp2) // Case 2 Function Definition
{
    int length=0;
    printf("\n\tAddress stored in dp2 pointer = %u", dp2);
    printf("\n\tAddress stored in *dp2 pointer = %u", *dp2);
    printf("\n\tSelf Address of Double pointer = %u", &dp2);

    printf("\n\tString is => %s ",*dp2);
    printf("\n\tCharacter by character Print and counting... ");
    while (**dp2 != NULL)
    {
        printf("   %c", **dp2);
        printf("\n\tIncremented Address is => %u with char  ",++*dp2); // Increment Address stored in Double Pointer to next Address
        length++;
    }
   printf("\n\tLength of the String is => %d",length);
}

/*******************************************************

OUTPUT

 C program on Double Pointers
         1: Introduction to Double Pointer
         2: String Length Using Double Pointer
        Enter the choice =1

         Case 1: Introduction to Double Pointer
        Value of SimpleVar = 999
        Value of SimpleVar using single pointer *sp = 999
        Value of SimpleVar using double pointer **dp= 999
        Value of SimpleVar using triple pointer ***tp= 999

        Self Address of SimpleVar = 6422288
        Address stored in Single Pointer = 6422288
        Self Address of Single Pointer = 6422284
        Address stored in Double pointer = 6422284
        Self Address of Double pointer = 6422280
        Address stored in Triple pointer = 6422280
        Self Address of Triple pointer = 6422276
Do you want to repeat? (y/n)y

         C program on Double Pointers
         1: Introduction to Double Pointer
         2: String Length Using Double Pointer
        Enter the choice =2

         Case 2: String Length Using Double Pointer

        Address stored in dp2 pointer = 6422272
        Address stored in *dp2 pointer = 4215484
        Self Address of Double pointer = 6422256
        String is => Test Me Using Double Pointer
        Character by character Print and counting...    T
        Incremented Address is => 4215485 with char     e
        Incremented Address is => 4215486 with char     s
        Incremented Address is => 4215487 with char     t
        Incremented Address is => 4215488 with char
        Incremented Address is => 4215489 with char     M
        Incremented Address is => 4215490 with char     e
        Incremented Address is => 4215491 with char
        Incremented Address is => 4215492 with char     U
        Incremented Address is => 4215493 with char     s
        Incremented Address is => 4215494 with char     i
        Incremented Address is => 4215495 with char     n
        Incremented Address is => 4215496 with char     g
        Incremented Address is => 4215497 with char
        Incremented Address is => 4215498 with char     D
        Incremented Address is => 4215499 with char     o
        Incremented Address is => 4215500 with char     u
        Incremented Address is => 4215501 with char     b
        Incremented Address is => 4215502 with char     l
        Incremented Address is => 4215503 with char     e
        Incremented Address is => 4215504 with char
        Incremented Address is => 4215505 with char     P
        Incremented Address is => 4215506 with char     o
        Incremented Address is => 4215507 with char     i
        Incremented Address is => 4215508 with char     n
        Incremented Address is => 4215509 with char     t
        Incremented Address is => 4215510 with char     e
        Incremented Address is => 4215511 with char     r
        Incremented Address is => 4215512 with char
        Length of the String is => 28
Do you want to repeat? (y/n)n
********************************************************/

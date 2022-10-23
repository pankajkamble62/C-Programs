/**********************
 Problem statement: Write a program to display working of different types of operators
 (Case 1: Pre and Post Increment Decrement, Case 2: Bitwise, Case: 3 Comma, Case 4: Arrow)
  using Switch case.
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/

#include<stdio.h>
void main()
{
    int ch,i,x,y;
    char ch1='y';
    do
    {
    printf("\n\tA program to display working of different types of operators");
    printf("\n\t 1: Pre and Post Increment Decrement");
    printf("\n\t 2: Bitwise");
    printf("\n\t 3: Comma");
    printf("\n\t 4: Arrow");
    printf("\n\tEnter the choice =");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
           printf("\n\t Case 1: Pre and Post Increment Decrement");
           i=10;
           printf("\nx=i is x= %d",i);
           printf("\nx=++i is x= %d",++i);
           printf("\nx=i++ is x= %d",i++);
           printf("\nx=i++ + ++i is x= %d",i++ + ++i);
           //x=--i;
           //y=i--;
           break;
    case 2:
           printf("\n\t Case 2: Bitwise");
            do
            {
                printf("\n\tBitwise operators");
                printf("\n\t 1: &");
                printf("\n\t 2: |");
                printf("\n\t 3: ^");
                printf("\n\t 4: ~");
                printf("\n\tEnter the choice =");
                scanf("%d",&ch);
                switch(ch)
                {
                case 1:
                        printf("\n\t Case 1: &");

                        break;
                case 2:
                        printf("\n\t Case 2: |");
                        break;
                case 3:
                        printf("\n\t Case 3: ^");
                        break;
                case 4:
                        printf("\n\t Case 4: ~");
                        break;
                default:
                        printf("\n\t Wrong Choice");
                    }
                printf("\nDo you want to repeat? \n(Y/N or y/n)");
                scanf(" %c",&ch1);
                }while(ch1=='y');
           break;
    case 3:
           printf("\n\t Case 3: Comma");
           break;
    case 4:
           printf("\n\t Case 4: Arrow");
           break;
    default:
           printf("\n\t Wrong Choice");
    }
    printf("\nDo you want to repeat? \n(Y/N or y/n)");
    scanf(" %c",&ch1);
    }while(ch1=='y');
}
/***********************
***********OUTPUT********
        A program to display working of different types of operators
         1: Pre and Post Increment Decrement
         2: Bitwise
         3: Comma
         4: Arrow
        Enter the choice =1

         Case 1: Pre and Post Increment Decrement
x=i is x= 10
x=++i is x= 11
x=i++ is x= 11
x=i++ + ++i is x= 26
Do you want to repeat?
(Y/N or y/n)y

        A program to display working of different types of operators
         1: Pre and Post Increment Decrement
         2: Bitwise
         3: Comma
         4: Arrow
        Enter the choice =3

         Case 3: Comma
Do you want to repeat?
(Y/N or y/n)5


***********************/
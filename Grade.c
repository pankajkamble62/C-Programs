/**********************
 Problem statement: Write a program to calculate grade of a student using relational and logical operators.
Class: FY 
Div.: M  
Batch: M3
Roll No.:55
Name:Pankaj M Kamble
************************/

#include<stdio.h>
void main()
{
    int a ,b ,c ,d ,e ;

    float sum, perc;

        printf("\n Enter the marks of subjects \n");

        scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    sum  = a + b + c + d + e;

    perc = (sum / 500 ) * 100; 

         printf(" Total Marks = %.2f\n",sum );
         printf(" Marks Percentage = %.2f", perc );

    if( perc >= 90)
    {
        printf(" \n Distinction \n ");
    }
    else if(perc >= 80 && perc < 90)
    {
        printf(" \n First Class \n ");
    }
    else if(perc >= 70 && perc < 80)
    {
        printf(" \n Higher Second Class \n ");
    }
    else if(perc >= 60 && perc < 70)
    {
        printf(" \n Second Class \n ");
    }
    else if(perc >= 40 && perc < 60)
    {
        printf(" \n Pass Class \n ");
    }
    else if(perc <40)
    {
        printf(" \n Fail \n ");
    }
                
    
    return 0;
}

/*********************
 OUTPUT

 Enter the marks of subjects
100
100
100
100
100
 Total Marks = 500.00
 Marks Percentage = 100.00
 Distinction

*********************/


/********************************************************************

Problem statement: Assignment based on Pointers in C
(All basic operations on Pointers covered)
**********************************************************************/
//declare structure
#include<stdio.h>
void exchange(int , int); //prototype of the function
void exchange_ref(int *, int *); //prototype of the function
void main()
{
    int ch,i,x,y;
    char ch1='y';

    int a=10; int *ptr; // case 1

    int inci=10; float incf=55.5; char incc='I'; int *pi,*pi1; float *pf,*pf1; char *pc,*pc1; double *pd,*pd1 ;// case 2,3,4,5

    int a1,b1; // Case 6

    int *intptr = NULL,*floatptr = NULL,*charptr=NULL;// Case 8

    void *pointer; int inum=10; float fnum=55.5; char cchar = 'I'; // Case 9
    do
    {
    printf("\n\tAssignment based on Pointers in C ");
    printf("\n\t 1: Pointer Introduction");
    printf("\n\t 2: Incrementing and Decrementing Pointer");
    printf("\n\t 3: Adding and Subtracting integer value and pointer");
    printf("\n\t 4: Subtracting two pointer variables");
    printf("\n\t 5: Comparing two pointer variables");
    printf("\n\t 6: pass by value ");
    printf("\n\t 7: pass by reference");
    printf("\n\t 8: Size of Pointer ");
    printf("\n\t 9: Void Pointer ");
    printf("\n\tEnter the choice =");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
           printf("\n\t Case 1: Pointer Introduction");
           ptr=&a;
           printf("\n\t a = %d", a);
           printf("\n\t *(&a) = %d",*(&a));
           printf("\n\t a = %d", &a);
           printf("\n\t a using u = %u", &a);
           printf("\n\t Hex a = %p", &a);
           printf("\n\n\n\t ptr = %d", ptr);
           printf("\n\t ptr using u = %u",ptr);
           printf("\n\t Hex ptr = %p",ptr);
           printf("\n\t *ptr = %d", *ptr);
           printf("\n\t &ptr = %d",&ptr);
           printf("\n\t &ptr using u = %u",&ptr);
           printf("\n\t Hex &ptr = %p",&ptr);
           break;
    case 2:
           printf("\n\t Case 2: Incrementing and Decrementing Pointer");
           printf("\n\t *** Incrementing Pointer ***");
           pi=&inci;
           printf("\n\t Address of Integer Pointer is = %u",pi);
           pi=pi+1; // Current Address + number * size of data type
           printf("\n\t Incremented Address of Integer Pointer is = %u",pi);

           pf=&incf;
           printf("\n\t Address of Float Pointer is = %u",pf);
           pf=pf+1;
           printf("\n\t Incremented Address of Float Pointer is = %u",pf);

           pc=&incc;
           printf("\n\t Address of Char Pointer is = %u",pc);
           pc=pc+1;
           printf("\n\t Incremented Address of Char Pointer is = %u",pc);

           pd= (double *)(1000);
           printf("\n\t Address of Double Pointer is = %u",pd);
           pd=pd+1;
           printf("\n\t Incremented Address of Double Pointer is = %u",pd);

           printf("\n\n\t *** Decrementing Pointer ***");
           pi=&inci;
           printf("\n\t Address of Integer Pointer is = %u",pi);
           pi=pi-1; // Current Address - number * size of data type
           printf("\n\t Decremented Address of Integer Pointer is = %u",pi);

           pf=&incf;
           printf("\n\t Address of Float Pointer is = %u",pf);
           pf=pf-1;
           printf("\n\t Decremented Address of Float Pointer is = %u",pf);

           pc=&incc;
           printf("\n\t Address of Char Pointer is = %u",pc);
           pc=pc-1;
           printf("\n\t Decremented Address of Char Pointer is = %u",pc);

           pd= (double *)(1000);
           printf("\n\t Address of Double Pointer is = %u",pd);
           pd=pd-1;
           printf("\n\t Decremented Address of Double Pointer is = %u",pd);
           break;
    case 3:
           printf("\n\t Case 3: Adding and Subtracting integer value and pointer");
           printf("\n\t *** Adding Integer Value and Pointer ***");
           pi=&inci;
           printf("\n\t Address of Integer Pointer is = %u",pi);
           pi=pi+3; // Current Address + number * size of data type
           printf("\n\t Incremented Address of Integer Pointer is = %u",pi);

           pf=&incf;
           printf("\n\t Address of Float Pointer is = %u",pf);
           pf=pf+4;
           printf("\n\t Incremented Address of Float Pointer is = %u",pf);

           pc=&incc;
           printf("\n\t Address of Char Pointer is = %u",pc);
           pc=pc+5;
           printf("\n\t Incremented Address of Char Pointer is = %u",pc);

           pd= (double *)(1000);
           printf("\n\t Address of Double Pointer is = %u",pd);
           pd=pd+6;
           printf("\n\t Incremented Address of Double Pointer is = %u",pd);

           printf("\n\n\t *** Subtracting Integer Value and  Pointer ***");
           pi=&inci;
           printf("\n\t Address of Integer Pointer is = %u",pi);
           pi=pi-3; // Current Address - number * size of data type
           printf("\n\t Decremented Address of Integer Pointer is = %u",pi);

           pf=&incf;
           printf("\n\t Address of Float Pointer is = %u",pf);
           pf=pf-4;
           printf("\n\t Decremented Address of Float Pointer is = %u",pf);

           pc=&incc;
           printf("\n\t Address of Char Pointer is = %u",pc);
           pc=pc-5;
           printf("\n\t Decremented Address of Char Pointer is = %u",pc);

           pd= (double *)(1000);
           printf("\n\t Address of Double Pointer is = %u",pd);
           pd=pd-6;
           printf("\n\t Decremented Address of Double Pointer is = %u",pd);
           break;
    case 4:
           printf("\n\t Case 4: Subtracting two pointer variables");
           printf("\n\n\t *** Difference of Pointers ***");
           pi= (int *)(1000);
           pi1= (int *)(2000); // (address1 -address2)/size of data type
           printf("\n\t Difference between Integer Pointers is => %d",pi-pi1);
           printf("\n\t Difference between Integer Pointers is => %d",pi1-pi);
           pf= (float *)(1000);
           pf1= (float *)(2000);
           printf("\n\t Difference between Float Pointers is => %d",pf-pf1);
           printf("\n\t Difference between Integer Pointers is => %d",pf1-pf);
           pc= (char *)(1000);
           pc1= (char *)(2000);
           printf("\n\t Difference between Char Pointers is => %d",pc-pc1);
           printf("\n\t Difference between Integer Pointers is => %d",pc1-pc);
           pd= (double *)(1000);
           pd1= (double *)(2000);
           printf("\n\t Difference between Double Pointers is => %d",pd-pd1);
           printf("\n\t Difference between Integer Pointers is => %d",pd1-pd);
           break;
    case 5:
           printf("\n\t Case 5: Comparing two pointer variables");
           pd= (double *)(1000);
           pd1= (double *)(2000);
           printf("\n\t Double Pointers pd Value is => %d",pd);
           printf("\n\t Double Pointers pd Address is => %d",&pd);
           printf("\n\t Double Pointers pd Value is => %d",pd1);
           printf("\n\t Double Pointers pd1 Address is => %d",&pd1);
           if(pd>pd1)
           {
               printf("\n\t PD is Far from PD1");
           }
           else if(pd<pd1)
           {
               printf("\n\t PD1 is Far from PD");
           }
           else
            {
               printf("\n\t PD and PD1 both are equal");
            }
           break;
    case 6:
           printf("\n\t Case 6: Pass by value ");
           a1 = 100; b1 = 200;
           printf("\n\tIn main function Before swapping the values a1 = %d, b1 = %d",a1,b1); // printing the value of a and b in main
           exchange(a1,b1);
           printf("\n\tIn main function After swapping values a1 = %d, b1 = %d",a1,b1); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20
           break;
    case 7:
           printf("\n\t Case 7: Pass by reference");
           a1 = 111; b1 = 222;
           printf("\n\tIn main function Before swapping the values a1 = %d, b1 = %d",a1,b1); // printing the value of a and b in main
           exchange_ref(&a1,&b1);
           printf("\n\tIn main function After swapping values a1 = %d, b1 = %d",a1,b1);
           break;
    case 8:
           printf("\n\t Case 8: Size of Pointer");
           printf("\n\t Size of Integer Pointer is = %d",sizeof(intptr));
           printf("\n\t Size of Float Pointer is = %d",sizeof(floatptr));
           printf("\n\t Size of Char Pointer is = %d",sizeof(charptr));
           break;
    case 9:
           printf("\n\t Case 9: Void Pointer");
           pointer=&inum;
           printf("\n\n\t Void Pointer has Integer Value = %d", *((int*)pointer));
           printf("\n\t Void Pointer has Integer Value Address is= %d", pointer);
           printf("\n\t Void Pointer Own Address is= %d", &pointer);
           pointer=&fnum;
           printf("\n\n\t Void Pointer has Float Value = %f", *((float*)pointer));
           printf("\n\t Void Pointer has Float Value Address is= %d", pointer);
           printf("\n\t Void Pointer Own Address is= %d", &pointer);
           pointer=&cchar;
           printf("\n\n\t Void Pointer has Char Value = %c", *((char*)pointer));
           printf("\n\t Void Pointer has Char Value Address is= %d", pointer);
           printf("\n\t Void Pointer Own Address is= %d", &pointer);
           break;
    default:
           printf("\n\t Wrong Choice");
    }
    printf("\nDo you want to repeat? (y/n)");
    scanf(" %c",&ch1);
    }while(ch1=='y');
}
void exchange (int a1, int b1)
    {
        int temp;
        temp = a1;
        a1=b1;
        b1=temp;
        printf("\n\tIn Exchange function After swapping values a1 = %d, b1 = %d",a1,b1); // Formal parameters, a = 20, b = 10
    }

void exchange_ref(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1=*b1;
    *b1=temp;
    printf("\n\tAfter swapping values in function a1 = %d, b1 = %d",*a1,*b1); // Formal parameters, a = 20, b = 10
}
/****************************************************************************
        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =1

         Case 1: Pointer Introduction
         a = 10
         *(&a) = 10
         a = 6422256
         a using u = 6422256
         Hex a = 0061FEF0


         ptr = 6422256
         ptr using u = 6422256
         Hex ptr = 0061FEF0
         *ptr = 10
         &ptr = 6422252
         &ptr using u = 6422252
         Hex &ptr = 0061FEEC
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =2

         Case 2: Incrementing and Decrementing Pointer
         *** Incrementing Pointer ***
         Address of Integer Pointer is = 6422248
         Incremented Address of Integer Pointer is = 6422252
         Address of Float Pointer is = 6422244
         Incremented Address of Float Pointer is = 6422248
         Address of Char Pointer is = 6422243
         Incremented Address of Char Pointer is = 6422244
         Address of Double Pointer is = 1000
         Incremented Address of Double Pointer is = 1008

         *** Decrementing Pointer ***
         Address of Integer Pointer is = 6422248
         Decremented Address of Integer Pointer is = 6422244
         Address of Float Pointer is = 6422244
         Decremented Address of Float Pointer is = 6422240
         Address of Char Pointer is = 6422243
         Decremented Address of Char Pointer is = 6422242
         Address of Double Pointer is = 1000
         Decremented Address of Double Pointer is = 992
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =3

         Case 3: Adding and Subtracting integer value and pointer
         *** Adding Integer Value and Pointer ***
         Address of Integer Pointer is = 6422248
         Incremented Address of Integer Pointer is = 6422260
         Address of Float Pointer is = 6422244
         Incremented Address of Float Pointer is = 6422260
         Address of Char Pointer is = 6422243
         Incremented Address of Char Pointer is = 6422248
         Address of Double Pointer is = 1000
         Incremented Address of Double Pointer is = 1048

         *** Subtracting Integer Value and  Pointer ***
         Address of Integer Pointer is = 6422248
         Decremented Address of Integer Pointer is = 6422236
         Address of Float Pointer is = 6422244
         Decremented Address of Float Pointer is = 6422228
         Address of Char Pointer is = 6422243
         Decremented Address of Char Pointer is = 6422238
         Address of Double Pointer is = 1000
         Decremented Address of Double Pointer is = 952
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =4

         Case 4: Subtracting two pointer variables

         *** Difference of Pointers ***
         Difference between Integer Pointers is => -250
         Difference between Integer Pointers is => 250
         Difference between Float Pointers is => -250
         Difference between Integer Pointers is => 250
         Difference between Char Pointers is => -1000
         Difference between Integer Pointers is => 1000
         Difference between Double Pointers is => -125
         Difference between Integer Pointers is => 125
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =5

         Case 5: Comparing two pointer variables
         Double Pointers pd Value is => 1000
         Double Pointers pd Address is => 6422236
         Double Pointers pd Value is => 2000
         Double Pointers pd1 Address is => 6422232
         PD1 is Far from PD
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =6

         Case 6: Pass by value
        In main function Before swapping the values a1 = 100, b1 = 200
        In Exchange function After swapping values a1 = 200, b1 = 100
        In main function After swapping values a1 = 100, b1 = 200
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =7

         Case 7: Pass by reference
        In main function Before swapping the values a1 = 111, b1 = 222
        After swapping values in function a1 = 222, b1 = 111
        In main function After swapping values a1 = 222, b1 = 111
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =8

         Case 8: Size of Pointer
         Size of Integer Pointer is = 4
         Size of Float Pointer is = 4
         Size of Char Pointer is = 4
Do you want to repeat? (y/n)y

        Assignment based on Pointers in C
         1: Pointer Introduction
         2: Incrementing and Decrementing Pointer
         3: Adding and Subtracting integer value and pointer
         4: Subtracting two pointer variables
         5: Comparing two pointer variables
         6: pass by value
         7: pass by reference
         8: Size of Pointer
         9: Void Pointer
        Enter the choice =9

         Case 9: Void Pointer

         Void Pointer has Integer Value = 10
         Void Pointer has Integer Value Address is= 6422216
         Void Pointer Own Address is= 6422220

         Void Pointer has Float Value = 55.500000
         Void Pointer has Float Value Address is= 6422212
         Void Pointer Own Address is= 6422220

         Void Pointer has Char Value = I
         Void Pointer has Char Value Address is= 6422211
         Void Pointer Own Address is= 6422220
Do you want to repeat? (y/n)n

****************************************************************************/
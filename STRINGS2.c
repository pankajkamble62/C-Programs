/******************************************************************************
PROGRAM STATEMENT:
Programming in C - Nested Switch Case Skeleton:
Problem statement:
6)    Assignment based on Strings.(With and Without using Library functions)
a)    Write a program to implement string length function (strlen).
b)    Write a program to implement string copy (strcpy).
c)    Write a program to implement string concatenation (strcat).
d)    Write a program to implement string compare (strcmp).
e)    Write a program to implement function to find Sub String in given string (strstr)
f)    Write a program to reverse the given string (In-place logic)
g)    Write a program to find number of occurrences of sub string in given string.

NAME:Atharva Panchwagh
CLASS/DIV: FY,M             BATCH:B3
ROLL NO 52
*******************************************************************************/
#include<stdio.h>
#include<string.h>
void main()
{
    int ch;
    char ch1='y';
    char s1[100],s2[100],s3[100];
    int i=0,j=0;
    do
    {
    printf("\n\tAssignment based on Strings.(With and Without using Library functions)");
    printf("\n\t 1: With Built in Library Functions");
    printf("\n\t 2: Without Library Functions");
    printf("\n\tEnter the choice =");
    scanf("%d",&ch);
    switch(ch) // Outer Switch
    {
    case 1:
           do
            {
                printf("\n\t Case 1: With Library Functions");
                printf("\n\t 1: String Length");
                printf("\n\t 2: String Copy");
                printf("\n\t 3: String Concatenation");
                printf("\n\t 4: String Compare");
                printf("\n\t 5: String Sub String");
                printf("\n\t Enter the choice =");
                scanf("%d",&ch);
                switch(ch) //Inner Switch No 1
                {
                case 1:
                        printf("\n\t Case 1: String Length");
                        printf("\n\t Enter string => ");
                        scanf("%s",&s1);
                        int length;
                        length=strlen(s1);
                        printf("size of string => %d",length);

                        break;
                case 2:
                        printf("\n\t Case 2: String Copy");
                        printf("\n\t Enter string => ");
                        scanf("%s",&s1);
                        strcpy(s2,s1);
                        printf("\n\t Original string => %s",s1);
                        printf("\n\t Copied string => %s",s2);
                        break;
                case 3:
                        printf("\n\t Case 3: String Concatenation");
                        printf("\n\t Enter first string  => ");
                         scanf("%s",&s1);
                        printf("\n\t Enter second string => ");
                         scanf("%s",&s2);
                         strcat(s1,s2);
                         printf("\n\t concatenated string => %s",s1);


                        break;
                case 4:
                        printf("\n\t Case 4: String Compare");
                        printf("\n\t Enter first string  => ");
                         scanf("%s",&s1);
                        printf("\n\t Enter second string => ");
                         scanf("%s",&s2);
                        length=strcmp(s1,s2);
                         printf("\nComparative value = %d",length);

                        break;
                case 5:
                        printf("\n\t Case 5: String Sub String");
                        char *s1 = "i am building a logic",*s2 ="building",*ptr;
                        ptr=strstr(s1,s2);
                        printf("\n\tOriginal string => %s",s1);
                        printf("\n\t The sub string => %s",ptr);

                        break;
                default:
                        printf("\n\t Wrong Choice");
                    }
                printf("\nDo you want to repeat Without Library String Operations? ?(y/n)");
                scanf(" %c",&ch1);
                }while(ch1=='y');
              break;
    case 2:
           do
            {
                printf("\n\t Case 2: Without Library Functions");
                printf("\n\t 1: String Length");
                printf("\n\t 2: String Copy");
                printf("\n\t 3: String Concatenation");
                printf("\n\t 4: String Compare");
                printf("\n\t 5: String Sub String");
                printf("\n\t 6: String Reverse");
                printf("\n\t 7: String Count Occurrences of Sub String");
                printf("\n\t Enter the choice =");
                scanf("%d",&ch);
                switch(ch)  // Inner Switch NO 2
                {
                case 1:
                        printf("\n\t Case 1: String Length");
                        printf("\t\n Enter String => ");
                        scanf("%s",&s1);

                        while(s1[i]!='\0')
                        {
                            i++;
                        }

                        printf("\n\t Case 1: String Length=> %d ",i);

                        break;
                case 2:
                        printf("\n\t Case 2: String Copy");

                        printf("\n\tEnter original string => ");
                        scanf("%s",&s1);
                        for(int i=0;s1[i]!='\0';++i)
                        {
                            s2[i]=s1[i];
                        }
                        s2[i]= '\0';
                        printf("\n\tString S2 : %s",s2);
                        break;
                case 3:
                        printf("\n\t Case 3: String Concatenation");
                        printf("\n\t Enter first string => ");
                        scanf("%s",&s1);
                        printf("\n\t Enter second string => ");
                        scanf("%s",&s2);

                        for(int i=0; s1[i] !='\0';i++)
                         {
                             s3[j]=s1[i];

                             j++;
                         }
                         i=0;
                         while(s2[i] !='\0')
                         {
                             s3[j]=s2[i];
                             i++;
                             j++;
                         }
                         s3[j]='\0';
                         printf("\nConcatenated string: %s",s3);
                        break;
                case 4:
                        printf("\n\t Case 4: String Compare");
                        printf("\n\t Enter first string => ");
                        scanf("%s",&s1);
                        printf("\n\t Enter second string => ");
                        scanf("%s",&s2);
                        for(i=0;s1[i]==s2[i] && s1[i]=='\0';i++);
                        if(s1[i]<s2[i])
                        {
                          printf("\n string1 is less than string2");
                        }
                        else if(s1[i]>s2[i])
                        {
                          printf("\n string1 is greater than string2");
                        }
                        else
                        {
                            printf("\n string1 is greater than string2");
                        }
                        break;
                case 5:
                        printf("\n\t Case 5: String Sub String");
                        s1[20], s2[20];
                        int pos,length;

                        printf("\nEnter a string : ");
                        scanf("%s",&s1);

                       printf("\nEnter the position and length of substring : ");
                       scanf("% d %d",&pos,&length);

                       while (i < length)
                        {
                        	 s2[i]= s1[pos+i-1];
                        	 i++;
                        }
                        s2[i] = '\0';
                         printf("Required substring is %s\n", s2);
                        break;
                case 6:
                        printf("\n\t Case 6: String Reverse");

                        char string[20],temp;
                        int i,len;
                        printf("Enter String : ");
                        scanf("%s",string);
                       len=strlen(string)-1;
                       for(i=0;i<strlen(string)/2;i++){
                        temp=string[i];
                       string[i]=string[len];
                       string[len--]=temp;
                      }
                      printf("\nReverse string :%s",string);
                        break;
                case 7:
                        printf("\n\t Case 7: String Count Occurrences of Sub String ");
                        char str[20], sub[20];
                        int count = 0, count1=0;
                        int l1, l2;

                       printf("\n Enter a string : ");
                       scanf("%s", &str);

                       l1 = strlen(str);

                      printf("\n Enter a substring : ");
                      scanf(" %s", &sub);

                      l2 = strlen(sub);

                     for (i = 0; i < l1; i++)
                {
                     j = 0;
                }

                     while ((str[i] == sub[j]))
                {
                     count++;
                     i++;
                     j++;
                }
                    if (count == l2)
                {
                    count1++;
                }
                    else
                 {
                    i++;
                 }
                    printf("%s occurs %d times in %s", sub, count1, str);
                        break;


                        break;
                default:
                        printf("\n\t Wrong Choice");
                    }
                printf("\nDo you want to repeat Without Library String Operations? ?(y/n)");
                scanf(" %c",&ch1);
                }while(ch1=='y');
           break;
     default:
           printf("\n\t Wrong Choice");
    }
    printf("\nDo you want to repeat With and Without Library String Operations? (y/n)");
    scanf(" %c",&ch1);
    }while(ch1=='y');
}

/***********************
OUTPUT:
Assignment based on Strings.(With and Without using Library functions)
         1: With Built in Library Functions
         2: Without Library Functions
        Enter the choice =1

         Case 1: With Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         Enter the choice =1

         Case 1: String Length
Enter the string : vitpune

Length of string : 7
Do you want to repeat With build in Library Functions? ?(y/n)y

         Case 1: With Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         Enter the choice =2

         Case 2: String Copy
Enter the string s1 : vit

Enter the string s2 : pune

The copied string : pune
                                   pune
Do you want to repeat With build in Library Functions? ?(y/n)y

         Case 1: With Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         Enter the choice =3

         Case 3: String Concatenation
Enter the string str1 : vit

Enter the string str2 : pune
 The concatenated string is :vitpune
Do you want to repeat With build in Library Functions? ?(y/n)y

         Case 1: With Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         Enter the choice =4

         Case 4: String Compare
Enter the string st1 : vit

Enter the string st2 : pune

Comparative value is = 192
Two strings are not equal st1 is bigger than st2
Do you want to repeat With build in Library Functions? ?(y/n)y

         Case 1: With Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         Enter the choice =5

         Case 5: String Sub String
The sub string is : am doing assingment based on string
Do you want to repeat With build in Library Functions? ?(y/n)n

Do you want to repeat With and Without Library String Operations? (y/n)y

        Assignment based on Strings.(With and Without using Library functions)
         1: With Built in Library Functions
         2: Without Library Functions
        Enter the choice =2

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =1

         Case 1: String Length
Enter any string : vitpune
The length of the string : 7
Do you want to repeat Without Library String Operations? (y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =2

         Case 2: String Copy
Enter 1st string :vit

Enter 2st string :pune

The copied string is : pune
                                        pune
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =3

        Case3:String Concatenation
Enter the First string : vit

Enter the Second string : pune
The Concatenated string is :  vitpune
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =4

         Case 4: String Compare
Enter first string a1 : vit

Enter second string a2 : pune
Firsr string is bigger than second string
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =5

         Case 5: String Sub String
Enter a string : divmstudent

Enter the position and length of substring : 4 11
Required substring is "mstudent"
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =5

         Case 5: String Sub String
Enter a string : divmstudent

Enter the position and length of substring : 4 11
Required substring is "mstudent"
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =6

         Case 6: String Reverse
Enter the string : college

The reverse string : c
The reverse string : oc
The reverse string : loc
The reverse string : lloc
The reverse string : elloc
The reverse string : gelloc
The reverse string : egelloc
Do you want to repeat Without Library String Operations? ?(y/n)y

         Case 2: Without Library Functions
         1: String Length
         2: String Copy
         3: String Concatenation
         4: String Compare
         5: String Sub String
         6: String Reverse
         7: String Count Occurrences of Sub String
         Enter the choice =7

         Case 7: String Count Occurrences of Sub String
 Enter a string : aapppaapppaa

 Enter a substring : ppp
ppp occurs 2 times in aapppaapppaa
Do you want to repeat Without Library String Operations? ?(y/n)n

Do you want to repeat With and Without Library String Operations? (y/n)n

[Program finished]
****/
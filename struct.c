#include <stdio.h>
 
typedef struct{
  char name[30];
  int roll;
  char stream[30];
} Student;
 
int main()
{
  char buffer;

  //number of students
  int n=10;

  //array of students (i.e. structure array)
  Student students[n];

  //Taking each student details as input
  printf("Enter %d Student Details \n \n",n);
  for(int i=0; i<n; i++){
    printf("Student %d:- \n",i+1);

    printf("Name: ");
    scanf("%[^\n]",students[i].name);
    scanf("%c",&buffer);
    
    printf("Roll: ");
    scanf("%d",&students[i].roll);
    scanf("%c",&buffer);

    printf("Stream: ");
    scanf("%[^\n]",students[i].stream);
    scanf("%c",&buffer);

    printf("\n");
  }

  //display student details
  printf("-------------- All Students Details ---------------\n");
  for(int i=0; i<n; i++){
    printf("Name \t: ");
    printf("%s \n",students[i].name);

    printf("Roll \t: ");
    printf("%d \n",students[i].roll);

    printf("Stream \t: ");
    printf("%s \n",students[i].stream);

    printf("\n");
  }

  return 0;
}
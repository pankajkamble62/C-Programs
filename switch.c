#include<stdio.h>
#include<string.h>
int main() {

int DAY;

char *str;
str = "NULL";
switch (DAY) {
case 1 : str = "Monday";
   break;
case 2 : str = "Tuesday";
   break;
case 3 : str = "Wednesday";
   break;
case 4 : str = "Thursday";
   break;
case 5 : str = "Friday";
   break;
case 6 : str = "Saturday";
   break;
case 7 : str = "Sunday";
   break;
default : str = "NULL";
   break;
 }
if ( strcmp(str, "Sunday") == 0 )
 {
printf ( "HOLIDAY" ); }
else if ( str != 0 ) {
  printf ( "WORKING DAY" ); }
else {
  printf ("INVALID INPUT"); }

return 0;
}
































































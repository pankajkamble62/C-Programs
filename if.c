#include<stdio.h>
int main()
{
    int flag1=0,flag2=0,flag3=0,flag4=0,X,Y,x1,x2,x3,x4,y1,y2,y3,y4;

    x1 = 075;   y1 = 075;x2 = 275;   y2 = 075;x3 = 275;   y3 = 325;x4 = 075;   y4 = 325;
    printf("Enter the coordinates");
    scanf("%d %d",&X,&Y);
    if(X>=x1){

        flag1=1;
    }
    if(X<=x2){
        flag2=1;
    }
    if(Y>=y1){
        flag3=1;
    }
    if(Y<=y4){
        flag4=1;
    }
    if(flag1&&flag2&&flag3 &&flag4 ){
        printf("Inside");
    }
    else{
        printf("Outside");
    }


    return 0;


}
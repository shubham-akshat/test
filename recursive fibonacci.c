#include<stdio.h>
void main(){
int no,a=0,b=1,p;
printf("Enter which numbered term of Fibonacci Series is Desired \n");
scanf("%d",&no);
printf("The Number is:- \n");
if(no==0||no==1)
    printf("0");
else if(no==2)
    printf("1");
    else
       p=fibo(no,a,b);
       printf("%d",p);
}
int fibo(int w,int x,int y){
    int z,d;
    z=x+y;
    x=y;
    y=z;
    if(w>3){
           d=fibo(w-1,x,y);
    }
    else
        return(y);
        return(d);
}

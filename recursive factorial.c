#include<stdio.h>
int f=1;
void main(){
int no,p;
printf("Enter The Number Of Which You Want the Factorial \n");
scanf("%d",&no);
p=fact(no);
printf("The Factorial is \n%d",p);
}
int fact(int x){
if(x==0)
    return(1);
    f=x*fact(x-1);
return(f);
}

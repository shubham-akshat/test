#include<stdio.h>
void main(){
int a,b;
printf("Enter Any Two Numbers \n");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("First becomes %d and second becomes %d",a,b);
}
void swap(int *c,int *d){
*c=*c+*d;
*d=*c-*d;
*c=*c-*d;
}

#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("Please \! Enter the Number of terms you want in the series \n");
scanf("%d",&n);
if(n<=0){
    printf("Please Enter A Positive Integer \n");
    scanf("%d",&n);
    }
    printf("The Fibonacci Series is \n");
if(n==1)
    printf("0");
if(n==2)
    printf("0 \n1");
if(n>2){
    printf("0 \n1 \n");
    for(;(n-2)>0;n--){
        c=a+b;
        a=b;
        b=c;
        printf("%d \n",c);
    }
}

}

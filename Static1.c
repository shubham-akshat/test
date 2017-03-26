#include<stdio.h>
void sum(int);
int main(){
int n;
printf("Enter Any Number \n");
scanf("%d",&n);
sum(n);
}
void sum(int x){
 static int s=0;
    if(x>0){
    s+=x;
    sum(x-1);
    }
    else
        printf("The Sum Of Numbers is \n%d",s);
}

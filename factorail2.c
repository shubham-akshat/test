#include<stdio.h>
int main(){
int no,f;
 abc:
printf("Enter Any Positive Number \n");
scanf("%d",&no);
if(no>0){
for(f=1;no>0;no--){
f=no*f;
}
printf("The Factorial of The Number is %d",f);
}
else{
    printf("I SAID POSITIVE NUMBER \n");
    goto abc;
}
}


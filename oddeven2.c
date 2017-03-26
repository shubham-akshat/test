#include<stdio.h>
int main(){
int i,j;
printf("Enter Any Number \n");
scanf("%d",&i);
j=i&1;
if(j==1){
printf("The entered number is odd");
}
else{
printf("The entered number is even");
}
return 0;
}

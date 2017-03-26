#include<stdio.h>
int main(){
int i,j;
printf("Enter Any Number");
scanf("%d",&i);
j=i%2;
if(j==0){
printf("The entered number is even");
}
else{
printf("The entered number is odd");
}
return 0;
}

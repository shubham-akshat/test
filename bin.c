#include<stdio.h>
int main(){
 int no,x,s=0,n=1;
printf("Enter Any Number \n");
scanf("%d",&no);
for(;no>0;no/=2){
    x=no%2;
    s=s*10+x;
    n=n*10;
}
printf("The Binary of the number is %d",s);
return 0;
}

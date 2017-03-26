#include<stdio.h>
#include<math.h>
int main(){
int n,c=pow(2,30);
printf("Enter Any Number \n");
scanf("%d",&n); printf("The Binary of the Number is ");
while(c>=1)
{
if((n&c)==0)
printf("0");
else
printf("1");
c=c>>1;
}
return 0;
}

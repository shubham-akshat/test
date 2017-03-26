#include<stdio.h>
int main()
{
int n,c=1073741824;
printf("Enter Any Number \n");
scanf("%d",&n);
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

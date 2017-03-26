#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("a=%d and b=%d",a,b);
return 0;
}

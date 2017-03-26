#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,x,y;
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
printf("Enter c=");
scanf("%d",&c);
d=(b*b)-(4*a*c);
if(d>=0)
{
x=((-b)+(sqrt(d)))/(2*a);
y=((-b)-(sqrt(d)))/(2*a);
printf("The roots of given equation are %d and %d .",x,y);
}
else{
printf("Roots don't exist.");
}
return 0;
}

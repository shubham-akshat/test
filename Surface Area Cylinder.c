#include<stdio.h>
#include<math.h>
int main()
{
float r,h,s;
printf("Enter radius =");
scanf("%f",&r);
printf("Enter Height =");
scanf("%f",&h);
s=(2*3.14*r*r)+(2*3.14*r*h);
printf("The Surface Area of Cylinder is %f",s);
return 0;
}

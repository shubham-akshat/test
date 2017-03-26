#include<stdio.h>
#include<math.h>
int main()
{
float x,s;
printf("Enter the variable \n");
scanf("%f",&x);
s=1+((pow(x,3))/(3*2*1))+((pow(x,5))/(5*4*3*2*1))+((pow(x,7))/(7*6*5*4*3*2*1));
printf("The Sum of the series is %f",s);
return 0;
}

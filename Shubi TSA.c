#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
float r,h,s;
int i;
printf("Enter radius =");
scanf("%f",&r);
printf("Enter Height =");
scanf("%f",&h);
printf("Select 1=TSA or 2=CSA \n");
scanf("%d",&i);
if(i==1)
{
s=(2*3.14*r*r)+(2*3.14*r*h);
printf("The Selected area of Cylinder is %f",s);
}
else if(i==2)
{
s=(2*3.14*r*h);
printf("The Selected area of Cylinder is %f",s);
}
else{
printf("Select an appropriate option.");
}
return(0);
}

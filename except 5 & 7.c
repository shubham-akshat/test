#include<stdio.h>
void main(){
int min,max;
printf("Enter the minimum and maximum of your range \n");
scanf("%d%d",&min,&max);
printf("The Numbers between the given range which are not the multiples of 5 and 7 are \n");
for(;min<=max;min++){
if(min%7==0||min%5==0){
continue;
}
else
printf("%d \n",min);}
}

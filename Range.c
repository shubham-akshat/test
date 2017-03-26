#include<stdio.h>
#include<math.h>
int main(){
float no;
printf("Enter Any Number \n");
scanf("%f",&no);
if(no<0){
printf("Enter a Positive Number");}
else if(no>=0&&no<11){
printf("The Number lies between 0 and 10");}
else if(no>=11&&no<21){
printf("The Number lies between 11 and 20");}
else if(no>=21&&no<31){
printf("The Number lies between 21 and 30");}
else{
printf("The Number is greater than 30");}
return 0;
}

#include<stdio.h>
#include<math.h>
int count(int n){
int c=0;
for(;n>0;n/=10){
c++;}
return(c);
}
int main(){
int no,cnt,check;
double sq,d;
printf("Enter Any Number \n");
scanf("%d",&no);
cnt=count(no);
sq=pow(no,2);
d=pow(10,cnt);
check=((int)sq%(int)d)+((int)sq/(int)d);
if(check==no)
printf("Its True");
else
 printf("Its False");
 return (0);
}

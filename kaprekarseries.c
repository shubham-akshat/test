#include<stdio.h>
#include<math.h>
int count(int n){
int c=0;
for(;n>0;n/=10){
c++;}
return(c);
}
int main(){
int no=1,cnt,check,n;
double sq,d;
printf("The first fifteen Kaprekar numbers are \n");
for(n=1;n<16;no++){
cnt=count(no);
sq=pow(no,2);
d=pow(10,cnt);
check=((int)sq%(int)d)+((int)sq/(int)d);
if(check==no){
printf("%d\n",no);
n++;
}
 }
 return (0);
}

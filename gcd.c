#include<stdio.h>
int main(){
int a,b,i,gcd,lcm;
printf("Enter Two Numbers \n");
scanf("%d%d",&a,&b);
for(i=1;i<=a&&i<=b;i++){
if(a%i==0&&b%i==0)
gcd=i;
}
lcm=a*b/gcd;
printf("The GCD And LCM of %d and %d are %d and %d respectively",a,b,gcd,lcm);
return 0;
}

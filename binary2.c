#include <stdio.h>
int main(){
int no,i,j=1,k;
printf("Enter Any Number");
scanf("%d",&no);
for(i=32;i>0;i--){
        k=j<<i;
if((no&k)==0)
printf("0");
else
printf("1");
}
}

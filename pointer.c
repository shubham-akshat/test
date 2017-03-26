#include<stdio.h>
void main(){
char i=10;
char *p=&i;
printf("%u \n",p);
printf("%d \n",*p);
printf("%u \n",&p);
printf("%u",sizeof(p));
}

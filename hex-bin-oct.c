#include<stdio.h>
int main(){
int no,choice,sum=0,remainder,n=1;
printf("Enter any Number \n");
scanf("%d",&no);
printf("What do you want to Convert it into \? \n 1. Binary \n 2. Octal \n 3. Hexadecimal \n");
scanf("%d",&choice);
if(choice==1){
    for(;no!=0;no/=2){
        remainder=no%2;
        sum=sum+(remainder*n);
        n*=10;
    }
    printf("The Converted number is %d",sum);
}
else if(choice==2){
for(;no!=0;no/=8){
        remainder=no%8;
        sum=sum+(remainder*n);
        n*=10;
    }
    printf("The Converted number is %d",sum);
}
else if(choice==3){
    for(;no!=0;no/=16){
        remainder=no%16;
        if(remainder<10){
         printf("%d",remainder);
            continue;
        }
        else{
        switch(remainder){
    case 10:
        printf("A");
        break;
    case 11:
        printf("B");
        break;
        case 12:
        printf("C");
        break;
        case 13:
        printf("D");
        break;
        case 14:
        printf("E");
        break;
        case 15:
        printf("F");
        break;}}}}}

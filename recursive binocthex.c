#include<stdio.h>
#include<stdlib.h>
void main(){
int no,b,o,h;
printf("Enter The Number which you want to convert \n");
scanf("%d",&no);
b=bin(no);
o=oct(no);
printf("Binary conversion is \n%d\n",b);
printf("Octal conversion is \n%d \n",o);
printf("Hexadecimal conversion in reverse order is \n");
h=hex(no);
}
bin(int a){
    int x;
    if (a==0){
        return 0;
    }
    else{
        x=(a%2)+10*bin(a/2);
        return x;
    }
}
oct(int a){
    int x;
    if (a==0){
        return 0;
    }
    else{
        x=(a%8)+10*oct(a/8);
        return x;
    }
}
int hex(int a){
    int x;
    if (a==0){
        exit;
    }
    else{
        x=a%16;
        switch(x){
        case 10:printf("A");
        break;
        case 11:printf("B");
        break;
        case 12:printf("C");
        break;
        case 13:printf("D");
        break;
        case 14:printf("E");
        break;
        case 15:printf("F");
        break;
        default:printf("%d",x);
        }
        hex(a/16);
    }
}

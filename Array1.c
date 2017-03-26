#include<stdio.h>
#include<stdlib.h>
int main(){
    int f,i,n,no;
    printf("Enter The Size of Array You Want -> \n");
    scanf("%d",&n);
int a[n];
printf("Enter The Elements \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
system("cls");
printf("Enter What You Want to search in the Array \n");
scanf("%d",&no);
for(i=0;i<n;i++){
    if(a[i]==no){
        f=1;
    break;
    }
    else
        f=0;
}
if(f==1)
    printf("The position of the Element is %d",i+1);
else
    printf("Element not found");
return 0;
}

#include<stdio.h>
void main(){
int i,j,a;
int arr[5]={5,3,6,2,1};
for(i=0;i<5;i++){
    for(j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
}
for(i=0;i<5;i++)
printf("%d\n",arr[i]);
}

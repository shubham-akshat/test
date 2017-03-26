#include<stdio.h>
#define MAX 500
main(){
int n,i,j,f=0;
int arr[MAX];
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=1;i<=n;i++){
    for(j=0;j<n;j++){
        if(i==arr[j]){
      f=1;
            break;
    }}
    if(f==0)
        printf("%d\n",i);
f=0;
}
}

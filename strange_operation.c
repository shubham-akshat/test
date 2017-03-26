#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    long long int sum=0;int i,n,k;
    scanf("%d%d",&n,&k);
    int arr[n+k];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
sum+=arr[i];
    }
    if(sum%2==0){
        if(k==1)
            printf("odd");
        else
            printf("even");
        }
    else
        printf("even");
}
return (0);
}

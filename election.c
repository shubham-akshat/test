#include<stdio.h>
int main(){
int t,st[100];
scanf("%d",&t);
while(t--){
    int n,k,j,count=0,size=0,i;
    scanf("%d%d",&n,&k);
    if(k<n){
    for(i=0;i<n;i++)
        scanf("%d",&st[i]);
    for(i=1;i!=n;i++){
        for(j=0;j<n;j++){
        if(st[i-1]==i)
            break;
        if(st[j]==i)
            count++;
        }
        if(count>=k)
            size++;
        count=0;
    }
printf("%d",size);
}
}
}

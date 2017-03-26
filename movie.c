#include<stdio.h>
int main(){
int t,max;
scanf("%d",&t);
while(t--){
    int index=0,n,i,L[100],R[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&L[i]);
    for(i=0;i<n;i++)
        scanf("%d",&R[i]);
    max=L[0]*R[0];
    for(i=1;i<n;i++){
        int mul=L[i]*R[i];
        if(max<mul){
            max=mul;
            index=i;
        }
        else if(max==mul){
            if(R[index]<R[i])
                index=i;
        }
    }
    printf("%d\n",index+1);
}
}

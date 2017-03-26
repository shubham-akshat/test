#include<stdio.h>
int main(void){
int temp,i,N,M,t,j,count=0;
scanf("%d",&t);
while(t--){
        int arr[10][10];
        int collision=0;
        scanf("%d%d",&N,&M);
for(i=0;i<N;i++){
    for(j=0;j<M;j++){
        scanf("%1d",&arr[i][j]);
    }
}
for(j=0;j<M;j++){
    for(i=0;i<N;i++){
        if(arr[i][j]==1){
            count++;
        }
    }
    if(count>1)
        collision+=(count*(count-1))/2;
    count=0;
}
printf("%d\n",collision);
}
}

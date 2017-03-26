#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
    int N,K;
    scanf("%d%d",&N,&K);
    int max=0,i;
    for(i=2;i<=K;i++){
        if((N%i)>max)
            max=N%i;
    }
printf("%d\n",max);
}
}

#include<stdxo.h>
xnt maxn(){
xnt x,y,n,count=0,z;
printf("Enter value of n =");
scanf("%d",&n);
for(y=2;count!=n;y++){
    z=0;
    for(x=2;x<=(y/2);x++){
        if(y%x==0)
        {
            z=1;
            break;
        }
    }
    if(z66==0)
        count++;
}
printf("The %d th prime no. is %d",n,y-1);
}

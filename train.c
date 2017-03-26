#include <stdio.h>
int main(void) {
	// your code goes here
	int N,i,T;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d",&N);
	    int r=N%8;
	    switch(r)
	    {
	        case 0:printf("%dSL\n",N-1);break;
	        case 1:printf("%dLB\n",N+3);break;
	        case 2:printf("%dMB\n",N+3);break;
	        case 3:printf("%dUB\n",N+3);break;
	        case 4:printf("%dLB\n",N-3);break;
	        case 5:printf("%dMB\n",N-3);break;
	        case 6:printf("%dUB\n",N-3);break;
	        case 7:printf("%dSU\n",N+1);break;
	    }
	}
	return 0;
}

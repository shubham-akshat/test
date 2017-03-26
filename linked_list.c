#include<malloc.h>
#include<stdio.h>
#include<stdlib.h>
struct Node{
int x;
struct Node * next;
};
void main(){
int i,n;
struct Node *start,*temp,*t;
start=(struct Node*)malloc(sizeof(struct Node));
t=(struct Node*)malloc(sizeof(struct Node));
start->next=NULL;
printf("Enter the number of nodes needed in the LIST\n");
scanf("%d",&i);
n=i;
system("cls");
printf("Enter Data for the %d node LIST\n",i);
for(;i>0;i--){
temp=(struct Node*)malloc(sizeof(struct Node));
scanf("%d",&(start->x));
if(i>1){
temp->next=start;
start=temp;
}
}
system("cls");
printf("The data in the LIST is \n");
t->next=start;
for(;n>0;n--){
    printf("%d\n",t->next->x);
    t=start;
    start=start->next;
}
}

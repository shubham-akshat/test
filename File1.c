#include<stdio.h>
void main(){
FILE * fp;
char c[150];
fp=fopen("sj.txt","a+");
if(fp==NULL){
printf("The File Can not be opened");
}
else{
    fseek(fp,30,SEEK_SET);
    fprintf(fp,"Just checking the a+ mode of which i no nothing at all");
    fseek(fp,16,SEEK_SET);
    while(!feof(fp)){
        fgets(c,150,fp);
        puts(c);
    }
}
}

#include<stdio.h>
void main(){
FILE *fp;
char c[150];
fp=fopen("sj.txt","w");
fprintf(fp,"This is just an attempt to try whether \ni get even the idea about what is file handling or not");
fclose(fp);
fp=fopen("sj.txt","r");
fseek(fp,7,SEEK_SET);
while(!feof(fp)){
    fgets(c,150,fp);
    //printf("%c",c);
    puts(c);
}
fclose(fp);
}

#include "stdio.h"
#include <conio.h>
    FILE *fp;
int main(){

      fp=fopen("admin.txt","r");
  char nameCheck[16];
  printf("Enter Name \n");
  fgets(nameCheck,18,stdin);
  fflush(stdin);
  //printf("The Name is %s",nameCheck);
 int value=checkAdmin(nameCheck) ;
  if(value==1){
    printf("Welcome!!\nEnter Password");
  }
}
  int checkAdmin(int *name){
  fgets()  strcpy(p.pname,name);
  rewind(fp);
  while(fread(&temp,100,1,fp)==1)
    {

        if(strcmpi(temp.pname,p.pname)==0)
            return 1;
    }
    return 0;
  }
/*    struct hmm no;

char s[30];
        fgets(s,29,fp);
            sprintf(no.name,"%s",s);
            printf("%s",no.name);
return 0;}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void aa(char s[],char x[]){
    int count=1;
    for(int q=0;q<100;q++){
        if(s[q]!='\0'){
            count++;
        }
    }
    printf("%d\n",count);

    for(int i=0;i<count-1;i++){
        if(s[i]!=' '){
            x[i]=s[i];
        }
        else{
            x[i]=' ';
            break;
        }
        strcat(x," ");
    }
    printf("%s",x);    
}
int main(){
    char d[100];
    char st[100]="1.27 10.3 9.432";
    
    aa(st,d);
    char newst[100];
    printf("%s",newst);
}
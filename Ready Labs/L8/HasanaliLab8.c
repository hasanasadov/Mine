#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
int main(){
    int x,y,z,i=0;
    double d,e,f;
    char c,*ptr;
    char s1[100],s2[100];
    printf("include char: \n");
    char C[100];
    scanf("%s",C);
    while(C[i]!='\0'){
        printf("%c",toupper(C[i]));
        i++;}
    fgetc(stdin);
    fgets(s1,100,stdin);

}
*/

void digitt(char c){
    if(isdigit(c)){
        printf("is digit \n");
    }
    else{
        printf("is not digit \n");
    }
}
void alphaa(char c){
    if(isalpha(c)){
        printf("is letter \n");
    }
    else{
        printf("is not letter \n");
    }
}
void cntrchar(char c){
    if(iscntrl(c)){
        printf("is control character \n");
    }
    else{
        printf("is not control character \n");
    }
}
void prntchar(char c){
    if(isprint(c)){
        printf("is print character \n");
    }
    else{
        printf("is not print character \n");
    }
}
void getprnt(char s1[]){
    getc(stdin);
    fgets(s1,100,stdin);
    puts(s1);
}
void lastpointer(char s1[]){
    char *ptr;
    int i;
    for(i=0;i<100;i++){
        if(iscntrl(s1[i])){
            ptr=&(s1[i-1]);
            printf("pointer of %c is %p \n",s1[i-1],ptr);
            break;
        }
    }
}
void aa(char s[],char x[]){
    int count=1;
    for(int q=0;q<100;q++){
        if(s[q]!='\0'){
            count++;
        }
    }
    printf("%d\n",count);
    
    char new[100];
    for(int i=0;i<count-1;i++){
        if(s[i]!=' '){
            x[i]=s[i];
        }
        else{
            x[i]=' ';
            break;
        }
    }
    strcat(x," ");
    printf("%s\n",x);
    for(int i=0;i<count-1;i++){
        s[i]=s[i+4];
    }
    printf("\n%s",s);
}

int main(){
    int x,y,z;
    char d[100],e[100],f[100];
    char c,*ptr;
    char s1[100],s2[100];
    /*scanf("%c",&c);
    c=toupper(c);
    digitt(c);
    cntrchar(c);
    alphaa(c);
    prntchar(c);
    putchar(c);
    puts("");
    getprnt(s1);
    lastpointer(s1);

    ptr=strstr(s1,s2);
    printf("%p",&ptr);
    */
    char st[100]="1.27 10.3 9.432";
    aa(st,d);
}
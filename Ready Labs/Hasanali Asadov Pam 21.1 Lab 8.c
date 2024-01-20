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
//task
/*
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
    for(int i=0;i<100;i++){
        if(iscntrl(s1[i])){
            ptr=&(s1[i-1]);
            printf("pointer of %c is %p \n",s1[i-1],ptr);
            break;
        }
    }
}

int main(){
    int x,y,z;
    double d,e,f;
    char c,*ptr;
    char s1[100],s2[100];
    scanf("%c",&c);

    c=toupper(c);
    
    digitt(c);
    cntrchar(c);
    alphaa(c);
    prntchar(c);
    putchar(c);
    puts("");
    getprnt(s1);
    lastpointer(s1);
    
}
*/
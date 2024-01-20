#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Task 1
/*
int main(){
    FILE *Hasan=fopen("text.txt","r+");
    char stF[20];
    char myNewString[1000]="";
    for(int i=0;!feof(Hasan);i++){
        fscanf(Hasan,"%s",stF);
        strcat(myNewString,stF);
        strcat(myNewString," ");
    }
    puts(myNewString);
    printf("%d\n",strlen(myNewString));
    char info[100];
    fgets(info,100,stdin);
    fputs("\n",Hasan);
    fputs(info,Hasan);
    fclose(Hasan);
}
*/

//Task 3
/*
int main(){
    int a;
    char b[10];
    FILE *A=fopen("JustCreated.txt","w");
    fprintf(A,"\t   Student ID \t       Student Name\n");
    for(int i=0;i<3;i++){
        printf("Enter %dst ID and Name at the same time\n",i+1);
        scanf("%d",&a);
        fgets(b,10,stdin);
        fprintf(A,"\t\t %d \t \t%s",a,b);
    }
    fclose(A);
}
*/

//Task 4 NOT DONE
/*
int main(){
    char st[100];
    char newst[1000]="";
    FILE *A=fopen("JustCreated.txt","r");
    for(int i=0; !feof(A);i++){
        fgets(st,100,A);
        strcat(newst,st);
        if (i==3){
            break;
        }
    }
    puts(newst);
    for (int q=0;q<1000;q++){
        if (newst[q]!='\0' || newst[q]!='\n' || newst[q]!='\t'){
                printf("%c",newst[q]);
            }
    }
    fclose(A);
}
*/

//Task 5

int main(){
    FILE *F=fopen("for_task5.txt","r");
    char st[100]="";
    char stinf[100]="";
    char newst[100]="";
    char Adlar[100]="";
    char CS20A[100]="";
    char CS21A[100]="";
    char CS29A[100]="";
    char CS35A[100]="";
    char CS36A[100]="";
    //fayldan qebul
    for(int i=0; !feof(F);i++){
        fgets(st,100,F);
        strcat(stinf,st);
    }
    puts(stinf);
    //Herfleri ve reqemelri ayirma
    int q=0,a=0;
    for (int i=0;i<strlen(stinf);i++){
        if (isdigit(stinf[i])){
            newst[q]=stinf[i];
            q++;
        }
        if (isalpha(stinf[i])){
            Adlar[a]=stinf[i];
            a++;
            //printf("%d  ",i);
        }
        //Herflerde bosluq qoyub adlari ayri ayri gostermek
        if(stinf[i]=='\n'){
            Adlar[a]=' ';
            a++;
        }
    }
    //puts(Adlar);
    //puts(newst);
    //bosluqlardan istifade edib adlari stringe cevirmek
    char *pt=strtok(Adlar," ");
    int i=0;
    while (pt!=NULL && i<strlen(newst)){
        if (newst[i]=='1'){
            strcat(CS20A,pt);
            strcat(CS20A," ");
        }
        if (newst[i+1]=='1'){
            strcat(CS21A,pt);
            strcat(CS21A," ");

        }
        if (newst[i+2]=='1'){
            strcat(CS29A,pt);
            strcat(CS29A," ");
        }
        if (newst[i+3]=='1'){
            strcat(CS35A,pt);
            strcat(CS35A," ");
        }
        if (newst[i+4]=='1'){
            strcat(CS36A,pt);
            strcat(CS36A," ");
        }
        //printf("%s\n",pt);
        i+=5;   
        //strcat(Adlar2,pt);
        pt=strtok(NULL," ");
    }
    //puts(" ");
    //puts(newst);
    puts(" ");
    printf("CS20A is %s\n",CS20A);
    printf("CS21A is %s\n",CS21A);
    printf("CS29A is %s\n",CS29A);
    printf("CS35A is %s\n",CS35A);
    printf("CS36A is %s\n",CS36A);
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main(){
    FILE *H1=fopen("Cquiz2022.txt","r");
    FILE *H2=fopen("Cquiz2022Answers.txt","w");;
    char a[100],n[100],v[100],p[100];
    char *article[5],*nouns[5],*verb[5],*preposition[5],*test;

    //LOOP 1 for article
    fgets(a,100,H1);
    test=strtok(a," \n");
    for (int a=0;test!=NULL;a++){
        test=strtok(NULL," \n");
        if (test==NULL){
            break;
        }
        article[a]=test;
    }
    //LOOP 2 for nouns
    fgets(n,100,H1);
    test=strtok(n," \n");
    for (int a=0;test!=NULL;a++){
        test=strtok(NULL," \n");
        if (test==NULL){
            break;
        }
        nouns[a]=test;
    }
    //LOOP 3 for verbs
    fgets(v,100,H1);
    test=strtok(v," \n");
    for (int a=0;test!=NULL;a++){
        test=strtok(NULL," \n");
        if (test==NULL){
            break;
        }
        verb[a]=test;
    }
    //LOOP 4 for prepositions
    fgets(p,100,H1);
    test=strtok(p," \n");
    for (int a=0;test!=NULL;a++){
        test=strtok(NULL," \n");
        if (test==NULL){
            break;
        }
        preposition[a]=test;
    }
    fclose(H1);
    //end of data scaning and collecting to string arrays

    printf("START GAME PRESS 1, EXIT -1: \n");
    int c;
    scanf("%d",&c);
    while (c==1 || c==-1){
        if (c==1){
            //For upper
            char str[5]="";
            strcpy(str,article[rand()%5]);
            str[0]=toupper(str[0]);
            //For same random in terminal an file 
            srand(time(NULL));
            printf("%s %s %s %s %s %s.\n",str,nouns[rand()%5],verb[rand()%5],preposition[rand()%5],article[rand()%5],nouns[rand()%5]);
            srand(time(NULL));
            fprintf(H2,"%s %s %s %s %s %s.\n",str,nouns[rand()%5],verb[rand()%5],preposition[rand()%5],article[rand()%5],nouns[rand()%5]);
            scanf("%d",&c);
        }
        else if (c==-1){
            printf("The Game is Ended\n");
            break;
        }
    }
    if (c!=-1 && c!=1){
        printf("The Game is Ended because you entered another digit\n");
        printf("TRY AGAIN LATER ;)\n");
    }
    return 0;
}
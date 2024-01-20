#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c=0;
    char stsum[1000];
    char newst[1000]="";
    FILE *filePTR=fopen("test.txt","r");

    for(int i=0;!feof(filePTR);i++){
        fscanf(filePTR,"%s",newst);
        //printf("%s ",newst);
        strcat(stsum,newst);
        strcat(stsum," ");
    }
    printf("%s",stsum);
    fclose(filePTR);
}
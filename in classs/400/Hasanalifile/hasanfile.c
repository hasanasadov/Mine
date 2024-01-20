#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char mine='s';
    char info[20]="new text to file! ";
    FILE *filePTR=fopen("HASAN.txt","a");
    fputc(mine,filePTR);

    for(int i=0; i<20;i++){
        fputc(info[i],filePTR);
    }

    for(int i=0; !feof(filePTR);i++){
        printf("%c",fgetc(filePTR));
        break;
    }
    //while(!feof(filePTR)){
        //printf("%c",fgetc(filePTR));
        //i++;}
    fclose(filePTR);
}


//write string

int main(){
    char melumat[35]="\nhappy birthday hasan";
    FILE *filePTR=fopen("JustCreated.txt","a");
    fputs("\n",filePTR);
    fputs(melumat,filePTR);
    fclose(filePTR);
}



//Read lines

int main(){
    int i;
    char stringinFile[1000]="salam";
    FILE *filePTR=fopen("JustCreated.txt","r");
    for (i=0; !feof(filePTR);i++){
        fgets(stringinFile,1000,filePTR);
        printf("line N_%d: %s",i,stringinFile);
    }
    fclose(filePTR);
}


// write data fprintf()

int main(){
    char melumat[50]="the text for appending into file with fprintf";
    int age=25;
    FILE *filePTR=fopen("JustCreated.txt","a");
    fprintf(filePTR,"\n\nmy age is: %d\nand my text is:%s",age,melumat);
    fclose(filePTR);
}

/*
// read string---fscanf()

int main(){
    int i;
    char stringinFile[100];
    char myNewString[5000];
    int IntinFile;
    FILE *filePTR=fopen("JustCreated.txt","r");
  
    // read the data till space character " "
    //fscanf(filePTR, "%d",&IntinFile);
    //printf("%d\n",IntinFile);
   
    fscanf(filePTR, "%s",stringinFile);
    printf("%s",stringinFile);

    for (i=0; !feof(filePTR);i++){
        fscanf(filePTR,"%s",stringinFile);
        printf("%s",stringinFile);
        strcat(myNewString,stringinFile);
        strcat(myNewString," ");
    }

    fclose(filePTR);

    puts("");
    puts("");
    puts(myNewString);
}
*/
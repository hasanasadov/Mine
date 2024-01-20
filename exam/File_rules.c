#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//oxuyanlar
//fgetc(filePtr);  char-char                loop  lazimdi
//fgets(st,100,filePTR);  setir-setir       loop  lazimdi
//fscanf(filePTR, "%s",st);  soz-soz        loop  lazimdi

//yazanalar
//fputc(mychar,filePTR);                loop  lazimdi
//fputs(st,filePTR);                    loop  lazimdi
//fprintf(filePTR,"%d %s",it,st);




//open and close file---fopen()-fclose()
/*
int main(){
    char melumat[50];
    //r-read mode-not existed in current folder-return null
    //FILE *filePTR=fopen("JustCreated.txt","r");
    //printf("%u",filePTR);

    //w-write mode-not existed but it creates new in current folder -return adress
    //once it existed , it overwrites the data
    //FILE *filePTR=fopen("JustCreated.txt","w");
    //printf("%u",filePTR);

    //r-read mode-once existed in current folder-return adress
    //FILE *filePTR=fopen("JustCreated.txt","r");
    //printf("%u",filePTR);

    //a-append mode-not existed but it creates new in current folder -return adress
    //once it existed , it appends the data to end of file
    FILE *filePTR=fopen("JustCreated.txt","a");

    //close the file after working
    fclose(filePTR);
}
*/

//write char---fputc()
/*
int main(){
    char mychar='b';
    char melumat[20]="new text to file! ";
    char cntr='\n';
    int i;
    //w-write mode-not existed but it creates new in current folder -return adress
    //once it existed , it overwrites the data
    FILE *filePTR=fopen("jfsds.txt","w");
    //one char to the file
    fputc(mychar,filePTR);
    //char by char with for loop
    fputc(cntr,filePTR);
    for (int i=0; i<20;i++){
        fputc(melumat[i],filePTR);
    }
    //close the file after working
    fclose(filePTR);
}
*/

//read char---fgetc()
/*
int main(){
    int i;
   //r-read mode-not existed in current folder-return null
    FILE *filePTR=fopen("JustCreatedd.txt","r");
    //read the first char------
    //printf("%c",fgetc(filePTR));
    //read the char by char till end of file
    //for(i=0; !feof(filePTR);i++){
        //printf("%c",fgetc(filePTR));
    //}
    while(!feof(filePTR)){
        printf("%c",fgetc(filePTR));
    }
    //close the file after working
    fclose(filePTR);
}
*/

//write string---fputs()
/*
int main(){
    char melumat[35]="happy birthday ilkin";
    //a-append mode-not existed but it creates new in current folder -return adress
    //once it existed , it appends the data to end of file
    FILE *filePTR=fopen("JustCreated.txt","w");
    //string to the file
    fputs(melumat,filePTR);
    //close the file after working
    fclose(filePTR);
}
*/

//read string---fgets()
/*
int main(){
    int i;
    char stringinFile[1000];
    //r-read mode-not existed in current folder-return null
    FILE *filePTR=fopen("JustCreatedd.txt","r");
    //read the string till new line character (\n)
    //fgets(stringinFile,100,filePTR);
    //printf("1: %s",stringinFile);
    //fgets(stringinFile,100,filePTR);
    //printf("2: %s",stringinFile);
    //read the string till END OF FILE FEOF(FPTR) 
    for (i=0; !feof(filePTR);i++){
        fgets(stringinFile,1000,filePTR);
        printf("line N_%d: %s",i,stringinFile);
    }
    //close the file after working
    fclose(filePTR);
}
*/

//write data---fprintf()
/*
int main(){
    char melumat[50]="the text for appending into file with fprintf";
    int age=25;
    //a-append mode-not existed but it creates new in current folder -return adress
    //once it existed , it appends the data to end of file
    FILE *filePTR=fopen("ab.txt","a");
    //write the data to the file
    fprintf(filePTR,"\n\nmy age is: %d\nand my text is:%s",age,melumat);
    //close the file after working
    fclose(filePTR);
}
*/

//read string---fscanf()
/*
int main(){
    int i;
    char stringinFile[100];
    char myNewString[5000]="";
    int IntinFile;
    //r-read mode-not existed in current folder-return null
    FILE *filePTR=fopen("salam.txt","r"); 
    //read the data till space character " "
    //fscanf(filePTR, "%d",&IntinFile);
    //printf("%d\n",IntinFile);  
    //fscanf(filePTR, "%s",stringinFile);
    //printf("%s",stringinFile);
    //read the string till END OF FILE FEOF(FPTR)
    for (i=0; !feof(filePTR);i++){
        fscanf(filePTR,"%s",stringinFile);
        printf("%s",stringinFile);
        printf("\n");
        strcat(myNewString,stringinFile); //to collect all data in one string 
        strcat(myNewString," ");
    }
    //close the file after working
    fclose(filePTR);
    //print the string file newly created
    printf("\n");
    printf(myNewString);
}
*/
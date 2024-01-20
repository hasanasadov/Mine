#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//Exercise 6.19
/*
#define Row 6
#define Col 6
int main(){
    int mat[Row][Col];
    for (int i=0;i<Row;i++){
        for (int j=0;j<Col;j++){
            mat[i][j]=i+1+j+1;
        }
    }
    for (int i=0; i<Row; i++){
        for (int j=0; j<Col; j++){
            printf("%-5d",mat[i][j]);
        }
        printf("\n");
    }
}
*/

/*
void fprintf_pig(FILE *file, char temp[]){
	for (int x=1;x<strlen(temp);x++){
		fprintf(file,"%c",temp[x]);
	}
	fprintf(file,"%c%s\n",temp[0],"ay");
}

int main(){
    FILE *first,*final;
    first=fopen("first_file.txt","r");
    final=fopen("secound_file.txt","w");
    char word[20];
    while (!feof(first)){
        fscanf(first,"%s",word);
        fprintf(final,"%s--",word);
        fprintf_pig(final,word);
    }
    fclose(first);
    fclose(final);
}
*/

/*
int main(){
    FILE *filePtr=fopen("Final_exam.txt","w");
    char mystr[100];
    printf("Enter a sentence:\n");
    fgets(mystr, 100, stdin);
    printf("%s",mystr);
    char *token;
    char *final[20];
    int i=0;
    token=strtok(mystr," \n");
    while (token!=NULL){
        final[i]=token;
        token=strtok(NULL," \n");
        i++;
    }
    for (int x=i;x>0;x--){
        fprintf(filePtr,"%s ",final[x-1]);
    }
    fclose(filePtr);
}
*/
/*
int main(){
    FILE *file=fopen("textanalysis.txt","w");
    char mystr[100];
    char arr[100]="";
    int x=0;
    char c;
    fgets(mystr,100,stdin);
    for (int i=0;i<strlen(mystr);i++){
        if (isalpha(mystr[i])!=0){
            arr[x]=mystr[i];
            x++;
        }
    }
    for (int i=0;i<strlen(arr);i++){
        int count=0;
        c=arr[i];
        if(c==' '){
            continue;
        }
        for(int j=0;j<strlen(arr);j++){
            if (c==arr[j]){
                count++;
                arr[j]=' ';
            }
        }
        
    fprintf(file,"%c---%d\n",c,count);
    }
    fclose(file);
}
*/

/*
int main(){
    FILE *file=fopen("occurrences.txt","w");
    char str[100]="Whether 'tis nobler in the mind to suffer salam";
    char a[5]=" \n";
    char *token,*arr[100];
    int len1,len,i=0;
    char dig[20]="";
    token=strtok(str,a);
    len=strlen(token);
    while (token!=NULL){   
        arr[i]=token;
        dig[i]=strlen(arr[i]);   
        len1=strlen(token);
        if (len1>len){
            len=len1;
        }
        token=strtok(NULL,a);
        printf("%d ",dig[i]);
        i++;
    }
    printf("\n");
    int sira[len];
    int x=0;
    while (x<len){
        sira[x]=0;  
        x++;
    }
    for (int j=0;j<i;j++){
        int count=1;
        int w=dig[j];
        if (w==0){
            continue;
        }
        for (int k=j;k<i;k++){
            if (dig[j]==dig[k+1]){
                count++;
                dig[k+1]=0;
                
            }
        }
    sira[dig[j]]=count;
    }
    
    int y=1;
    while (y<=len){
        fprintf(file,"%d         %d\n",y,sira[y]);
        y++;
    }
}
*/

/*
struct date{
    int month;
    int day;
    int year;
};

int main(){
    struct date tarix;
    struct date *tarix_ptr;
    tarix_ptr=&tarix;
    int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the month:");
    scanf("%d",&tarix_ptr->month);
    while (tarix_ptr->month>12 || tarix_ptr->month<0){
        printf("Enter the true month:");
        scanf("%d",&tarix_ptr->month);
    }
    printf("Enter the day:");
    scanf("%d",&tarix_ptr->day);
    while (tarix_ptr->day>days[(tarix_ptr->month)-1] || tarix_ptr->day<0){
        printf("Enter the true day:");
        scanf("%d",&tarix_ptr->day);
    }
    printf("Enter the year:");
    scanf("%d",&tarix_ptr->year);
    while (tarix_ptr->year<0){
        printf("Enter the true year:");
        scanf("%d",&tarix_ptr->year);
    }
    while (tarix_ptr->year%4!=0 && tarix_ptr->month==2 && tarix_ptr->day==29){
        printf("Please enter the suitable year for 29 February:");
        scanf("%d",&tarix_ptr->year);
    }
    printf("The current date: %d/%d/%d\n",tarix_ptr->day,tarix_ptr->month,tarix_ptr->year);
    //ilin son gunuduse
    if (tarix_ptr->day==days[(tarix_ptr->month)-1] && tarix_ptr->month==12){
        printf("1The next date: %d/%d/%d",1,1,tarix_ptr->year+1);
        return 0;
    }
    //dekabrdan basqa ay sonu
    if (tarix_ptr->day==days[(tarix_ptr->month)-1] && tarix_ptr->month!=12){
        printf("2The next date: %d/%d/%d",1,tarix_ptr->month+1,tarix_ptr->year);
    }
    else {
        printf("3The next date: %d/%d/%d",tarix_ptr->day+1,tarix_ptr->month,tarix_ptr->year);
    }
}
*/

/*
int main(){
    float a;
    int a1,q,m,x=5,b,y=1,temp,count=0;
    char r[10]="******.**";
    printf("Enter the check amount max 7 digits:\n");
    scanf("%f",&a);
    temp=a*100;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    printf("Digits:%d\n",count);

    m=a*100;
    if ((m/100000)>0){
        r[2]=',';
    }
    a1=a*100;
    b=a1/100000;
    q=a1%100;
    r[8]=(q%10)+'0';
    r[7]=(q/10)+'0';
    a1=a1/100;
    while (a1>0){
        while(x>2){
            r[x]=(a1%10)+'0';
            x--;
            break;
        }
        a1=a1/10;
    }
    while(b>0){
        while(y>-1){
            r[y]=(b%10)+'0';
            y--;
            break;
        }
        b=b/10;
    }
    printf("%s\n",r);
}
*/

/*
struct person{
    char lastName[15];
    char firstName[15];
    char age[4];
};
struct person ScanValues(){
    struct person var;
    printf("lastName: ");
    scanf("%10s",var.lastName);
    printf("firstName: ");
    scanf("%10s",var.firstName);
    printf("age: ");
    scanf("%10s",var.age);
    return var;
}
int main(){
    FILE *file=fopen("nameage.txt","w");
    struct person a[5];
    for (int i=0;i<5;i++){
        strcpy(a[i].lastName,"unassigned");
        strcpy(a[i].firstName,"");
        strcpy(a[i].age,"0");
    }
    for (int x=0;x<3;x++){
        a[x]=ScanValues();
    }
    for (int y=0;y<3;y++){
        fprintf(file,"\n%s\n%s\n%s\n",a[y].lastName,a[y].firstName,a[y].age);
    }
    for (int j=3;j<5;j++){
        fprintf(file,"\n%s\n%s\n%s\n",a[j].lastName,a[j].firstName,a[j].age);
    }
    rewind(file);
    for (int z=0;z<5;z++){
        if (strcmp(a[z].lastName,"unassigned")==0){
            strcpy(a[z].lastName,"No info");
            strcpy(a[z].firstName,"No info");
            fprintf(file,"\n%s\n%s\n%s\n",a[z].lastName,a[z].firstName,a[z].age);
        }
    }
    fclose(file);
    file=fopen("nameage.txt","w");
    for (int k=0;k<5;k++){
        fprintf(file,"\nPrintValues for %d:\nLast Name: %s\nFirst Name: %s\nAge: %s\n",k,a[k].lastName,a[k].firstName,a[k].age);
    }
    fclose(file);
}
*/

/*
int main(){
    FILE *number_word;
    char *ptr[8];
    char letters[]="ABC DEF GHI JKL MNO PRS TUV WXY";
    char *token;
    char number[10];
    char word[9];
    int digits[7];
    number_word=fopen("number_word.txt","w");
    printf("Enter the telephone number (ex 222-2222):");
    scanf("%s",number);
    for (int x=3;x<7;x++){
        number[x]=number[x+1];
    }
    number[strlen(number)-1]='\0';
    for (int x=0;x<7;x++){
        digits[x]=number[x]-'0'-2;
    }
    token=strtok(letters," \n");
    for (int x=0;x<8;x++){
        ptr[x]=token;
        token=strtok(NULL," \n");
    }
    for (int a=0;a<3;a++){
        word[0] = ptr[digits[0]] [a];
        for (int b=0;b<3;b++){
            word[1]=ptr[digits[1]][b];
            for (int c=0;c<3;c++){
                word[2]=ptr[digits[2]][c];
                for (int d=0;d<3;d++){
                    word[3]='-';
                    word[4]=ptr[digits[3]][d];
                    for (int e=0;e<3;e++){
                        word[5]=ptr[digits[4]][e];
                        for (int f=0;f<3;f++){
                            word[6]=ptr[digits[5]][f];
                            for (int g=0;g<3;g++){
                                word[7]=ptr[digits[6]][g];
                                fprintf(number_word,"%s\n",word);
                            }
                        }
                    }
                }
            }
        }
    }
    fclose(number_word);
}
*/

/*
int main(){
    FILE *file=fopen("datasize.txt","w");
    fprintf(file,"%-25s%-25s","Data type","Size");
    fclose(file);
    char c[5]="char";
    char u_c[15]="unsigned char";
    char s_i[12]="short int";
    char u_s_i[20]="unsigned short int";
    char i[5]="int";
    char u_i[15]="unsigned int";
    char l_i[10]="long int";
    char u_l_i[20]="unsigned long int";
    char f[10]="float";
    char d[10]="double";
    char l_d[15]="long double";
    file=fopen("datasize.txt","a");
    fprintf(file,"\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n%-25s%-25d\n",c,sizeof(char),u_c,sizeof(unsigned char),s_i,sizeof(short int),u_s_i,sizeof(unsigned short int),i,sizeof(int),u_i,sizeof(unsigned int),l_i,sizeof(long int),u_l_i,sizeof(unsigned long int),f,sizeof(float),d,sizeof(double),l_d,sizeof(long double));
}
*/

int main(){
    
}
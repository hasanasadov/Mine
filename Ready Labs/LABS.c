#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

//----------------------------------------------------------------LAB2
//Task4
/*
int main(){
    char a;
    printf("enter the letter");
    scanf("%c",&a);
    switch(a){
        case 'a':case 'i':case 'e':case 'o':case 'u':
            printf("the letter is wovel\n");
            break;
        default:
            printf("the letter is consonant\n");
            break;
    }
    return 0;
}
*/

//Task5
/*
int main(){
    char c;
    printf("enter the letter");
    scanf("%c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        printf("%c is an alphabet.", c);}
    else{
        printf("%c is not an alphabet.", c);
    }
    return 0;
}
*/

//Task8
/*
int len(){
    int a,x,temporary,summary;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("a=%d\n",a);
    temporary=a;
    summary=0;
    while (temporary>0){
        x=temporary%10;
        summary=summary*10+x;
        temporary=temporary/10;
    }
    if (a==summary){
        printf("%d is palindrome",a);
    }
    else{
        printf("%d is not palindrome",a);
    }
    return 0;
}
*/

//Task 14
/*
int main(){
    int a,temp,temp2,summ=0,d;
    int c=0;
    scanf("%d",a);
    temp=a;
    while (temp>0){
        temp/=10;
        c++;
    }
    printf("%d",c);
    while(temp2>0){
        d=pow(temp2%10,c);
        summ+=d;
        temp2/=10;
    }
    printf("%d",summ);
    if(a==summ){
        printf("The Number is Armstrong number");
    }
    else{
        printf("The Number is not Armstrong number");
    }
    return 0;
}
*/

//Task 15
/*
int main(){
    int count1=0,count2=0,a,temp,x;
    printf("enter: \n");
    scanf("%d",&a);
    printf("a=%d\n",a);
    int t=a;
    while (t>0){
        t/=10;
        count1++;
    }
    while (count1>0){
        x=a%10;
        a/=10;
        if (x==9){
            count2++;
        }
        count1--;
    }
    printf("%d digits of the number is 9",count2);
    return 0;
}
*/

//Task 16(a)
/*
int main(){
    int n,multp=1,temp;
    printf("number factorial: \n");
    scanf("%d",&n);
    printf("n=%d\n",n);
    temp=n;
    if (n>0){
        while (temp>0){
            multp*=temp;
            temp--;
        }
        printf("%d! is %d",n,multp);
    }
    else if (n==0){
        printf("%d! is 0",n);
    }
    return 0;
}
*/
//Task 18
/*
int main(){
    int a,s=0,A;
    A=a;
    scanf("%d",&a);
    if(a%10>3){
        s=s+(a+7)%10;
    }
    else{
        s+=(a+7);
    }
    a/=10;
    if(a%10>3){
        s=s+((a+7)%10)*10;
    }
    else{
        s+=(a+7)*10;
    }
    a/=10;
    if(a%10>3){
        s=s+((a+7)%10)*100;
    }
    else{
        s+=(a+7)*100;
    }
    a/=10;
    if(a%10>3){
        s=s+((a+7)%10)*1000;
    }
    else{
        s+=(a+7)*1000;
    }
    printf("coded %d is %d",A,s);
    return 0;
}
*/


//Task 20
/*
int main(void){
    int x,i,j;
    printf("%s","Enter an integer in range 1-20:");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            if(j==i)
                printf("%c",'@');
            else
                printf(" ");    
        }
        printf("\n");
    }
}
*/

//Optional questions - advanced version

//Task 32
/*
#include <stdio.h>
void main(){    
    int n; 
	scanf("%d",&n);
	printf("Decimal value = %d\n",n); 
	printf("Octal value = %o\n",n); 
	printf("Hexadecimal value = %n",n); 
} 
*/

//Task 33
/*
int main(){
    int i,den;
    double pi=4;
    for (i=0; i<10000;i++){
        den=i*2+3;
        if (i%2==0){
            pi=pi-(4.0/den);
        }
        else{
            pi=pi+(4.0/den);
        }
    }
    printf("pi = %lf\n",pi);
}
*/


//----------------------------------------------------------------------------------------LAB3

//Task 5 FACTORIAL WITH RECURSION
/*
int fact(int a){
    if (a>=2){
        return a*fact(a-1);
    }
    else
        return 1;
}
int main(){
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("the factorial of %d is %d",a,fact(a));
}
*/

//Task 10 CHAR TABLE
/*
char sym(int a,int b,char c){
    while (a!=0){
        int t=b;
        while(t!=0){
            printf("%c",c);
            t--;
        }
        printf("\n");
        a--;
    }
}
int main(){
    int a,b;
    char c;
    printf("enter row col symbol\n");
    scanf("%d %d %c",&a,&b,&c);
    printf("%c",sym(a,b,c));
}
*/

//Task 13 LCM
/*
int lcm(int a,int b){
    int maxx,q,lcm;
    if (a>b)
        maxx=a;
    else
        maxx=b;
    q=maxx;
    while(q!=1){
        if (q%a==0 && q%b==0){
            lcm=q;
            break;
        }
        else
            q++;
    }
    return lcm;
}
int main(){
    int a,b;
    printf("enter a b \n");
    scanf("%d %d",&a,&b);
    printf("LCM is %d ",lcm(a,b));
}
*/

//Task 15 PERFECT NUMBER
/*
int sumofdivide(int x){
    int c,summ=0;;
    for (int c=1;c<x;c++){
        if (x%c==0){
            summ+=c;
        }
    }
    return summ;
}
int main(){
    int a;
    printf("Till which number ");
    scanf("%d",&a);
    for(int q=1;q<a;q++){
        if (sumofdivide(q)==q){
            printf("%d\n",q);
        }
    }
}
*/

//Task 16 FINDING OF ROOTS
/*
int discr(int a,int b,int c){
    int d;
    d=b*b-4*a*c;
    return d;
}
int roots(int a,int b){
    float x1,x2;
    double d;
    x1=(-b-sqrt(d))/2*a;
    x2=(-b+sqrt(d))/2*a;
    printf("x1 = %f ",x1);
    printf("x2 = %f ",x2);
}
int main(){
    int a,b,c;
    printf("enter a b c \n");
    scanf("%d %d %d",&a,&b,&c);
    if (discr(a,b,c)>=0){
        roots(a,b);
    }
    else{
        printf("there is not root");
    }
}
*/

//Task 17 FINDING THE NUMBER
/*
#include <time.h>
#include <stdlib.h>
int main(){
    int a;
    time_t t;
    srand((unsigned)time(&t));
    a=rand()%1000;
    int c;
    printf("i have a number between 1 and 1000\n");
    printf("Can you find it\n");
    scanf("%d",&c);
    while (c!=a){
        if (c>a){
            printf("write Lower\n");
        }
        else{
            printf("write Higher\n");
        }
        scanf("%d",&c);
    }
    printf("you find the number!!!\n");
    printf("The number was %d ",a);
}
*/

//-------------------------------------------------------------------------------LAB4

//Task 8
/*
int main(void){
    int array[3][3];
    int rows, columns;
    for(rows=0;rows<3;rows++){
        for(columns=0;columns<3;columns++){
                array[rows][columns]=rand()%10;
                printf("%-5d",array[rows][columns]);
            }
        printf("\n");
    }
    return 0;
}
*/

//Task 9
/*
int main(void){
    int array[3][3];
    int rows, columns;
    for(rows=0;rows<3;rows++){
        for(columns=0;columns<3;columns++){
                array[rows][columns]=rand()%10;
                printf("%-5d",array[rows][columns]);
            }
        printf("\n");
    }
    int maxx=array[0][0];
    for(rows=0;rows<3;rows++){
        for(columns=0;columns<3;columns++){
            if(array[rows][columns]>maxx){
                maxx=array[rows][columns];
            }
        }
    }
    printf("Max is %d",maxx);
}
*/

//Task 10
/*
int main(void){
    int array[3][3];
    int rows, columns;
    for(rows=0;rows<3;rows++){
        for(columns=0;columns<3;columns++){
                array[rows][columns]=rand()%10;
                printf("%-5d",array[rows][columns]);
            }
        printf("\n");
    }
    int sum=0;
    int sz=3;
    for(int i=0;i<3;i++){
        sum+=array[sz-1][i];
        sz--;
    }
    printf("sum of right diogonal = %d",sum);
}
*/

//Task 11
/*
rand();
int main(void){
    int array1[3][3];
    int rows, columns;
    printf("array 1: \n");
    for(rows=0;rows<3;rows++){
        for(columns=0;columns<3;columns++){
                array1[rows][columns]=rand()%10;
                printf("%-5d",array1[rows][columns]);
            }
        printf("\n");
    }
    printf("\n");
    printf("array 2: \n");
    int array2[3][3];
    int r,c;
    for(r=0;r<3;r++){
    for(c=0;c<3;c++){
            array2[r][c]=rand()%10;
            printf("%-5d",array2[r][c]);
        }
        printf("\n");
    }
    printf("sum of array 1 and array 2: \n");
    int array3[3][3];
    int ro,co;
    for(ro=0;ro<3;ro++){
    for(co=0;co<3;co++){
            array3[ro][co]=array1[ro][co]+array2[ro][co];
            printf("%-5d",array3[ro][co]);
        }
        printf("\n");
    }
}
*/

//Task 12
/*
void main(){
    int arr1[10][10];
    int r1,c1;
    int i, j, yn =1;
    printf("Input number of Rows for the matrix :");
    scanf("%d", &r1);
    printf("Input number of Columns for the matrix :");
    scanf("%d",&c1);   
	printf("Input elements in the first matrix :\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
	        printf("element - [%d],[%d] : ",i,j);
	        scanf("%d",&arr1[i][j]);
        }
    }
 	printf("The matrix is :\n");
	for(i=0;i<r1;i++){
	    for(j=0;j<c1 ;j++){
	    printf("% 4d",arr1[i][j]);
        }
	    printf("\n");
	}
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
	        if(arr1[i][j] != 1 && arr1[j][i] !=0)
	{
	   yn = 0;
	   break;
	}
	}
}
   if(yn == 1 )
	printf(" The matrix is an identity matrix.\n\n");
   else
	printf(" The matrix is not an identity matrix.\n\n");
}
*/

//Task 15 BUBBLE SORT
/*
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
*/

//SELECTION SORT
/*
int main() {
    int arr[10]={6,12,0,18,11,99,55,45,34,2};
    int n=10;
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
    int i, j, position, swap;
    for (i = 0; i < (n - 1); i++) {
        position = i;
        for (j = i + 1; j < n; j++) {
           if (arr[position] > arr[j])
              position = j;
        }
        if (position != i) {
           swap = arr[i];
           arr[i] = arr[position];
           arr[position] = swap;
        }
    }
    for (i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    return 0;
}
*/

//QUICK SORT
/*
void swap(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int array[], int size){
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
int partition(int array[], int low, int high){
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
        i++;
        swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
void quickSort(int array[], int low, int high){
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}
int main(){
    int data[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(data) / sizeof(data[0]);
    printf("Unsorted Array\n");
    printArray(data, n);
    quickSort(data, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(data, n);
}
*/

//------------------------------------------------------------------------------------------LAB5

//Task 2
/*
#define S 80
size_t mystery2(const char *s);
int main(void){
    char string[S];
    puts ("Enter a string:");
    scanf("%79s",string);
    printf("%d\n",mystery2(string));
}

size_t mystery2(const char *s){
    size_t x;
    for (x=0; *s !='\0';++s){
        ++x;
    }
    return x;
}
*/

//Task 3
/*
#define S 80
int mystery3(const char *s1,const char *s2);
int main(){
    char string1[S];
    char string2[S];
    puts("Enter the strings:");
    scanf("%79s%79s",string1,string2);
    printf("The result is %d\n",mystery3(string1,string2));
}
int mystery3(const char *s1,const char *s2){
    int result=1;
    for (; *s1 !='\0' && *s2!='\0';++s1,++s2){
        if (*s1!=*s2){
            result=0;
        }
    }
    return result;
}
*/

//--------------------------------------------------------------------------------------------LAB6
//Task 1
/*
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int *a=malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    a=realloc(a,size/2);
    for(int i=0;i<size/2;i++){
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}
*/


//------------------------------------------------------------------------------------------------LAB7

//Task 1 A
/*
struct invertory
{
    char partName[30];
    int partNumber;
    float pointPrice;
    int stock;
    int reorder; 
};
*/

//Task 1 B
/*
struct address
{
    char streetAdress[25];
    char city[20];
    char state[3];
    char zipCode[6];
};
*/

//Task 1 C
/*
struct invertory
{
    char firstName[15];
    char LastName[15];
    struct address homeAdress;
};
*/

//Task 2
/*
struct customer 
{
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;
    struct {
        char phoneNumber[11];
        char address[50];
        char address[50];
        char city[15];
        char state[3];
        char zipCode[6];
    } personal;
} customerRecord, *customerPtr;
customerPtr = &customerRecord;

int main()
{
    costumerRecord.lastName;
    customerPtr->lastName or (*customerPtr).lastName;
    customerRecord.firstName;
    customerPtr->firstName or (*customerPtr).firstName;
    customerRecord.customerNumber;
    customerPtr->customerNumber or (*customerPtr).customerNumber;
    customerRecord.personal.phoneNumber;
    customerPtr->personal.phoneNumber or (*customerPtr).personal.phoneNumber;
}
*/

//-------------------------------------------------------------------------------------------------------------LAB8
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

//-----------------------------------------------------------------------------------------------------------LAB9
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
/*
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
        }
        if (newst[i+1]=='1'){
            strcat(CS21A,pt);
        }
        if (newst[i+2]=='1'){
            strcat(CS29A,pt);
        }
        if (newst[i+3]=='1'){
            strcat(CS35A,pt);
        }
        if (newst[i+4]=='1'){
            strcat(CS36A,pt);
        }
        printf("%s\n",pt);
        i+=5;   
        //strcat(Adlar2,pt);
        pt=strtok(NULL," ");
    }
    puts(" ");
    puts(newst);
    puts(" ");
    printf("CS20A is %s\n",CS20A);
    printf("CS21A is %s\n",CS21A);
    printf("CS29A is %s\n",CS29A);
    printf("CS35A is %s\n",CS35A);
    printf("CS36A is %s\n",CS36A);
}
*/
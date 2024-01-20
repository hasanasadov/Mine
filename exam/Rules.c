#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>

/*
int main(){
    char a[]=""; //char a[20]; 
    char b;
    
    puts("please enter variable a:");// like printf but prints only string
    gets(a); //like scanf but used for string
    puts(a);

    b=getchar(); //like scanf but inputs only singl charachter
    putchar(b);// like printf but prints only single charachter
    return 0;
}
*/

/*
int main(){
    int a;
    puts("please enter a:");
    scanf("%d",&a);
    
    if(a>0){
        puts("positive!");
        printf("%d is Positive!\n",a);
    }
    else if(a==0){
        printf("%d is Zero!\n",a);
    }
    else {
        printf("%d is not Positive!\n",a);
    }
*/

// IF AS A TERNARY
/*
int main(){
    int b;
    puts("please enter b:");
    scanf("%d",&b);
    (b>0) ? puts("Positive"): puts("Negativ");

}
*/

//IF
/*
int main(){
    int b;
    puts("please enter number for b to see seasons name:");
    scanf("%d",&b);
    
    if(b==1 )
        puts("Spring");
    else if(b==2)
        puts("Summer");
    else if(b==3)
        puts("Autumn");
    else if(b==4)
        puts("winter");
    else
        puts("Wrong");
*/

//SWITCH
/*
int main(){
    int b;
    puts("please enter number for b to see seasons name:");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        puts("Spring");
        break;
    case 2:
        puts("Summer");
        break;
    case 3:
        puts("Autumn");
        break;
    case 4:
        puts("winter");
        break;
    
    default:
        puts("Wrong");
        break;
    }
}
*/


//IF OR
/*
int main(){
    int b;
    puts("please enter number for b month to see seasons name:");
    scanf("%d",&b);
    
    if(b==1 || b==2 || b==12)
        puts("winter");
    else if(b==3 || b==4 || b==5)
        puts("sPRING");
    else if(b==6 || b==7 || b==8)
        puts("sUMMER");
    else if(b==9 || b==10 || b==11)
        puts("Autumn");
    else
        puts("Wrong");
*/

//SWITCH OR
/*
int main(){
    int b;
    puts("please enter number for b month to see seasons name:");
    scanf("%d",&b);
    switch (b)
    {
    case 1: case 2: case 12:
        puts("winter ");
        break;
    case 3: case 4: case 5:
        puts("Spring");
        break;
    case 6: case 7: case 8:
        puts("Summer");
        break;
    case 9: case 10: case 11:
        puts("Autumn");
        break;
    
    default:
        puts("Wrong");
        break;
    }
}
*/

//WHILE
/*
int main(){
    int a=0;
    while (a<5){
        puts("his there");
        a++;
    }
}
*/

//FOR
/*
int main(){
    int a=0;
    for (int a=0; a<5; a++){
        puts("his there");
    }
}
*/

//DO WHILE 
/*    
int main(){
    int b=0;
    do{
        puts("hi there");
        b++;
    }
    while(b<5);
    return 0;

}
*/

//BREAK
/*
int main(){
    int a=0;
    while (a<10){
        printf("a=%d \n",a);
        if(a==5)
            break; //STOPS WHEN A=5
        a++;
    }
}
*/

//CONTINUE
/*
int main(){
    int a=0;
    while (a<10){
        a++;
        if(a==5){
            continue; // skip the loop
        }
        printf("a=%d \n",a);   
    }
}
*/

//GOTO STOP
/*
int main()
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        printf( "Outer loop executing. i = %d\n", i );
        for ( j = 0; j < 3; j++ )
        {
            printf( " Inner loop executing. j = %d\n", j );
            if ( i == 5 )
                goto stop;
        }
    }

    // This message does not print: 
    printf( "Loop exited. i = %d\n", i );

    stop: printf( "Jumped to stop. i = %d\n", i );
}
*/

//FUNCTION
/*
double summ(double num1, double num2);
int main(){
    double a=5.5, b=6.5;
    double c=9, d=8;

    printf("sum1: %lf\n", summ(a,b));
    printf("sum2: %lf\n", summ(c,d));

    return 0;
}

double summ(double num1, double num2){
    return num1+num2;
}
*/

//ARRAYS
/*
int main(){
    int myarray[20];
    int myarray1[]={1,2,4,6};
    int myarray2[10]={1,6,9,4,6,84};
    printf("%d\n",myarray[20]);
}
*/

/*
#define SIZE 8
int main(){
    int myarray[SIZE];
    int myarray1[SIZE]={1,2,4,61,8,69,31,8};
    int myarray2[SIZE]={1,6,9,4,6,84,8,9};
    for (int i=0;i<SIZE;i++){
        printf("%d\n",myarray1[i]);
    }
}
*/

//MULTIDIMENSIONAL ARRAYS LOOP
/*
#define Row 2
#define Col 2
int main(){
    int mat[Row][Col]={{1,3},{4,6}};
    for (int i=0; i<Row; i++){
        for (int j=0; j<Col; j++){
            printf("%-5d",mat[i][j]);
        }
        printf("\n");
    }
    //indeksleri görmek üçün
    for (int i=0; i<Row; i++){
        for (int j=0; j<Col; j++){
            printf("mat[%d][%d]=%d\n",i,j,mat[i][j]);
        }
    }
}
*/

//PASS THE ARRAY TO THE FUNCTION
/*
#define SIZE 6
int summArray(int arr[],int size){
    int summ=0;
    for (int i=0;i<size;i++){
        summ+=arr[i];
    }
    return summ;
}

int main(){
    int arr[SIZE]={7,6,4,7,6,4};
    printf("summ=%d",summArray(arr,SIZE));
}
*/

//POİNTER ARRAY
/*
int main(){
    int arr[2]={3,6};
    int *p_arr;
    p_arr=&arr[0];
    int *p_arr1;
    p_arr1=&arr;

    printf("arr= %p \n",arr);
    printf("arr= %p \n",&arr);
    printf("p_arr= %p \n",p_arr);
    printf("p_arr1= %p \n",p_arr1);
    printf("p_arr2= %p \n",p_arr2);
}
*/

//-----------use of malloc()
/*
int main(){
    int *a=malloc(sizeof(int)*10);

    for (int i=0; i<10; i++){
        a[i]=10-i;
    }

    for (int i=0; i<10; i++){
        printf("a[%d]=%d\n",i, a[i]);
    }
    puts("");

    printf("adress of a: %p\n", a);

    free(a);

}
*/

// ----------if you dont use free() what happens
/*
void mem(){
    int *p=malloc(sizeof(int)*12800);
}
int main(){
    while(1) {
        mem()
    };
}
*/

//-----------use of calloc()
/*
int main(){
    int *a=calloc(10, sizeof(int));

    for (int i=0; i<10; i++){
        a[i]=10-i;
    }

    for (int i=0; i<10; i++){
        printf("a[%d]=%d\n",i, a[i]);
    }
    puts("");

    printf("adress of a: %p\n", a);

    free(a);

}
*/
//--------------------------free() securty
/*
int main(){
    int *a=calloc(10,sizeof(int));

    for (int i=0; i<10; i++){
        a[i]=10-i;
    }

    for (int i=0; i<10; i++){
        printf("a[%d]=%d\n",i, a[i]);
    }
    printf("\nadress of a: %p\n\n", a);

    int *temp_save=a;
    free(a);

    for (int i=0; i<10; i++){
        printf("temp_save[%d]=%d\n",i, temp_save[i]);
    }
    printf("\nadress of a: %p\n\n", temp_save);
}
*/
//------------------- dif malloc() calloc()
/*
int main(){
    int size=0;
    int *junk;
    srand(time(NULL));

    //to fill memory with junk data
    for (int i=0; i<1000; i++){
        size=rand()%2000;
        junk=malloc(size*sizeof(int));

        for (int i=0; i<size; i++){
            junk[i]=rand();
        }
        free(junk);
    }
    // allocate new array with malloc
    int *arr;
    int len=50;
    arr=calloc(len,sizeof(int));

    for (int i=0; i<len; i++){
        printf("arr[%d]=%d\n",i, arr[i]);
    }

    free(arr);
}
*/

//-----------------------realloc securty
/*
int main(){
    int len1=5, len2=3*len1;
    int *a1=malloc(len1*sizeof(int));
    int *a2=malloc(len1*sizeof(int));
    for (int i=0; i<len1; i++){
        a1[i]=11;
        a2[i]=22;
    }
    printf("\na1 array len= %d: \n",len1);
    for (int i=0; i<len1; i++) printf("a1[%d]=%d\n",i, a1[i]);
    printf("\na2 array len= %d: \n",len1);
    for (int i=0; i<len1; i++) printf("a1[%d]=%d\n",i, a2[i]);

    printf("a1 adress : %p\n",a1);
    printf("a2 adress : %p\n\n",a2);

    printf("a1 array len= %d: \n",len2);
    for (int i=0; i<len2; i++) printf("a1[%d]=%d\n",i, a1[i]);
    
    printf("\na1 adress before reallaoc : %p\n",a1);
    int *temp_save=a1;
    a1=realloc(a1, sizeof(int)*20);
    printf("a1 adress after reallaoc : %p\n",a1);
    printf("temp_save adress after reallaoc : %p\n",temp_save);

    for (int i=0; i<len1; i++) printf("temp_save[%d]=%d\n",i, temp_save[i]);
    for (int i=0; i<len1; i++) temp_save[i]=0; // make zero the old memory block
    printf("\ntemp_save became zero:\n");
    for (int i=0; i<len1; i++) printf("temp_save[%d]=%d\n",i, temp_save[i]);
    free(a1);
    free(a2);
}
*/

// ------------------------allocation of 2d array
/*
int main(){
    int row=3, col=3;
    int **array=malloc(sizeof(int*)*row);//allocation of rows
    for (int i=0; i<row; i++){
        array[i]=malloc(sizeof(int)*col); // allocation of columns
    }
    printf("&array= %p \n\n", array);//adress of array
    for (int i=0; i<row; i++){
        //printf("&array[%d]= %p \n", i,&array[i]);//adress of array[i]
        //printf("array[%d]= %p \n\n", i, array[i]);//value of array[i]
        for (int j=0; j<col; j++){
            printf("array[%d][%d] = %d \n", i,j,array[i][j]);//adress of array[i][j]
        }
        printf("\n\n");
    }
    for (int i=0; i<row; i++){
        free(array[i]); // free the columns
    }
    free(array); // free the rows columns   
}
*/
/*
int *matrix1,*matrix2,**sum_matrix;
int row,col;
srand(time(NULL));
printf("Enter row and collumn (a b): ");
scanf("%d %d",&row,&col);
matrix1=calloc(row,sizeof(int));
matrix2=calloc(row,sizeof(int));
sum_matrix=calloc(row,sizeof(int));
for (int x=0;x<row;x++){
    matrix1[x]=calloc(col,sizeof(int));
    matrix2[x]=calloc(col,sizeof(int));
    sum_matrix[x]=calloc(col,sizeof(int));
}
for (int x=0;x<row;x++){
    for (int y=0;y<col;y++){

        ((matrix1+x)+y)=rand()%40+10;
        ((matrix2+x)+y)=rand()%40+10;
        ((sum_matrix+x)+y)=((matrix1+x)+y)+((matrix2+x)+y);

    }
}
printf("1st matrix\n");
for (int x=0;x<row;x++){
    for (int y=0;y<col;y++){
        printf("%d  ",((matrix1+x)+y));
    }
    printf("\n");
}
printf("\n");
printf("2nd matrix\n");
for (int x=0;x<row;x++){
    for (int y=0;y<col;y++){
        printf("%d  ",((matrix2+x)+y));
    }
    printf("\n");
}
printf("\n");
printf("Sum of matrix\n");
for (int x=0;x<row;x++){
    for (int y=0;y<col;y++){
        printf("%d  ",((sum_matrix+x)+y));
    }
    printf("\n");
}
free(matrix1);
free(matrix2);
free(sum_matrix);
*/

/*
int main(){
    int **matrix1;
    int row,col;
    srand(time(NULL));
    printf("Enter row and collumn (a b): ");
    scanf("%d %d",&row,&col);
    matrix1=calloc(row,sizeof(int));
    for (int x=0;x<row;x++){
        matrix1[x]=calloc(col,sizeof(int));
    }
    for (int x=0;x<row;x++){
        for (int y=0;y<col;y++){
            *(*(matrix1+x)+y)=rand()%40+10;
        }
    }
    
    printf("1st matrix\n");
    for (int x=0;x<row;x++){
        for (int y=0;y<col;y++){
            printf("%d  ",*(*(matrix1+x)+y));
            
        }
        printf("\n");
    }
    
    for (int i=0; i<row; i++){
        free(matrix1[i]); 
    }
}
*/

//Function Pointers
/*
void sum(int a, double b){
    printf("%f",a+b);
}
int main(){
    void (*func_PTR)(int, double) =&sum;
    func_PTR(3,7.5);
    return 0;
}
*/

/*
void square(int a){
 printf("sqare = %d\n", a*a);
}
void cub(int a){
 printf("cub = %d\n", a*a*a);
}
int main(){
    void (*func_Pointer_arr[])(int)={square,cub};
    func_Pointer_arr[0](3);
    func_Pointer_arr[1](3);
    return 0;
}
*/

// Structure

//To create structure(WAY 1)
/*
struct Student{
    char name[12];
    int age;
};
int main(){
    //initialize structure members
    struct Student nazrin={"Nazrin", 26}, tarlan={"Tarlan", 27};
    printf("Name: %s\tAge: %d\n",nazrin.name, nazrin.age);
    printf("Name: %s\tAge: %d\n",tarlan.name, tarlan.age);
}
*/

//To create structure(WAY 1)(name terminaldan daxil edin)
/*
struct Student{
    char name[12];
    int age;
    
};
int main(){
    //initialize structure members
    printf("Enter the Name:\n"); 
    struct Student nazrin={"", 26}, tarlan={"", 27};
    scanf("%s",nazrin.name);
    scanf("%s",tarlan.name);
    printf("Name: %s\tAge: %d\n",nazrin.name, nazrin.age);
    printf("Name: %s\tAge: %d\n",tarlan.name, tarlan.age);
}
*/


//To create structure(WAY 2)
/*
struct Student{
    char name[10];
    int age;
} nazrin,tarlan;

int main(){
    struct Student ;
    strcpy(nazrin.name,"Nazrin");
    nazrin.age=26;
    printf("Name: ");
    scanf("%9s",tarlan.name);
    printf("age: ");
    scanf("%d",&tarlan.age);
    printf("Name: %s\tAge: %d\n",nazrin.name, nazrin.age);
    printf("Name: %s\tAge: %d\n",tarlan.name, tarlan.age);
}
*/

//FUNCTIONS
/*
struct Student{
    char name[12];
    int age;
}student1;

struct Student ScanValues();
void PrintValue(struct Student student1);

struct Student ScanValues(){
    printf("Name: ");
    scanf("%9s",student1.name);
    printf("age: ");
    scanf("%d",&student1.age);
    return student1;
}
void PrintValue(struct Student student1){
    printf("Name: %s\tAge: %d\n",student1.name, student1.age);
}
int main(){
    student1=ScanValues();//call ScanValues()
    PrintValue(student1);
}
*/

//ARRAY OF STRUCTURE
/*
struct Student{
    char name[12];
    int age;
};
struct Student ScanValues();
void PrintValue(struct Student st);
int main(){
    //initialize structure members
    int len=3;
    struct Student students[len];
    for(int i; i<len; i++){
        printf("\nScan values for student[%d]\n",i);
        students[i]=ScanValues();
    }
    puts("\n");
    for(int i; i<len; i++){
        printf("Print values for student[%d]\n",i);
        PrintValue(students[i]);
    }
}
struct Student ScanValues(){
    struct Student var;
    printf("Name: ");
    scanf("%9s",var.name);
    printf("age: ");
    scanf("%d",&var.age);
    return var;
}
void PrintValue(struct Student st){
    printf("Name: %s\tAge: %d\n",st.name, st.age);
}
*/

//NESTED STRUCTURE
/*
struct parent{
    char name[12];
    int year;
};
struct Student{
    char name[12];
    int age;
    struct parent father; 
};
int main(){
    struct Student student1;
    strcpy(student1.name,"Heydar");
    student1.age=18;
    strcpy(student1.father.name,"Alirza");
    student1.father.year=1960;//access to the memmbers of parent struct throug student stucture
    printf("Name: %s\tAge: %d\n",student1.name, student1.age);
    printf("Father Name: %s\tFather year: %d\n",student1.father.name, student1.father.year);
}
*/

//STRUCTURE POINTER
/*
struct parent{
    char name[12];
    int year;
};

struct Student{
    char name[12];
    int age;
    struct parent father; 
};

int main(){
    struct Student std;
    struct Student *stdptr;
    stdptr=&std; // initilaize pointer structure
    strcpy(stdptr->name,"Heydar");//access member of struct by ->
    stdptr->age=18;
    strcpy(stdptr->father.name,"Alirza");
    stdptr->father.year=39;
    printf("Name: %s\tAge: %d\n",stdptr->name, stdptr->age);
    printf("Father Name: %s\tYear: %d\n",stdptr->father.name, stdptr->father.year);
}
*/

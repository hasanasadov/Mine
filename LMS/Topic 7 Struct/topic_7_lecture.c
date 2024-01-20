#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a struct (or structure) is a collection of variables (can be of different types) under a single name.

//---------------------------------to create and accces struct
//--------------way1
/*
struct Student
{
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

//-------------way2
/*
struct Student
{
    char name[10];
    int age;
} nazrin,tarlan;

int main(){

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

//-------------------------------- functions
/*
struct Student
{
    char name[12];
    int age;
};
struct Student ScanValues();
void PrintValue(struct Student st);

int main(){
    struct Student student1;

    student1=ScanValues();//call ScanValues()
    PrintValue(student1);
}
//ScanValues function create variable var, and scan values for var members
struct Student ScanValues(){

    struct Student var;

    printf("Name: ");
    scanf("%9s",var.name);
    printf("age: ");
    scanf("%d",&var.age);

    return var;
}
//PrintValue function prints the members of st struct variable - parameter
void PrintValue(struct Student st){
    printf("Name: %s\tAge: %d\n",st.name, st.age);
}
*/

//-------------------------------array of structure
/*
struct Student
{
    char name[12];
    int age;
};

struct Student ScanValues();
void PrintValue(struct Student st);

int main(){
    //initialize structure members
    int len=3;
    struct Student students[len];

    for(int i=0; i<len; i++){
        printf("\nScan values for student[%d]\n",i);
        students[i]=ScanValues();
    }
    puts("\n");
    for(int i=0; i<len; i++){
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

//-------------------------------------------nested stuct
/*
struct parent
{
    char name[12];
    int year;
};
struct Student
{
    char name[12];
    int age;
    struct parent father; 
};

int main(){
    struct Student student1;
    strcpy(student1.name,"Heydar");
    student1.age=18;
    strcpy(student1.father.name,"Alirza");
    student1.father.year=1977;//access to the memmbers of parent struct throug student stucture

    printf("Name: %s\tAge: %d\n",student1.name, student1.age);
    printf("Father Name: %s\tFather year: %d\n",student1.father.name, student1.father.year);

}
*/

//--------------------------------------struct pointer
/*
struct Student
{
    char name[12];
    int age;
};

void PrintValue(struct Student *st){
    printf("Name: %s\tAge: %d\n",st->name, st->age);
}

int main(){
    struct Student std;
    struct Student *stdptr;
    stdptr=&std; // initilaize pointer structure

    strcpy(stdptr->name,"Heydar");//access member of struct by ->
    stdptr->age=18;
    
    PrintValue(stdptr);
}
*/

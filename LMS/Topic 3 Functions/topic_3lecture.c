#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define True 1
#define False 0
/*
//return type functions allow to call function in order to assign any variable
// here double is the data type of RETURN value

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

/*

//void do not allow to call function in order to assign any variable
void summ(double num1, double num2);

int main(){
    double a=5.5, b=6.5;
    double c=9, d=8;
    puts("sum1: ");
    summ(a,b);
    puts("\nsum2: ");
    summ(c,d);    

    return 0;
}

void summ(double num1, double num2){
    printf("%lf", num1+num2);
}
*/

/*
//program will not give error in this time
int main(){
    printf("sasas");
    main(2);
    return 0;
}
*/

/*
//program will give error because of VOID
int main(void){
    printf("sasas");
    main(2);
    return 0;
}
*/
/*
int a=7; //global variables
int b=9;

int multiple(){
    return a*b;
}
int main(){
    printf("sum: %d\n", a+b);
    printf("multiple: %d\n", multiple());
}
*/

/*
int a=7; //global variables
int b=9;

int multiple(){
    return a*b;
}
int main(){
    int a=1; //local variable
    int b=2;
    printf("sum: %d\n", a+b);
    printf("multiple: %d\n", multiple());
}
*/
/*
int incr(){
    static int a=0;
    a=a+10;
    return a;
}

int main(){
    printf("increment first %d\n",incr() );
    printf("increment second %d\n",incr() );
    return 0;
}
*/

/*
static int a=0;
int incr(){
    a=a+10;
    return a;
}

int main(){
    printf("increment first %d\n",incr() );
    printf("increment second %d\n",incr() );
    return 0;
}
*/

#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    for (int i=0; i<10; i++){
        printf("%d ", rand());
    }
    
    puts("\n");
    for (int i=0; i<10; i++){
        printf("%d ", rand()%10);
    }

    puts("\n");
    for (int i=0; i<10; i++){
        printf("%d ", 5+rand()%10); //[5; 15)
    }
    return 0;
}


/*
int main(){
    int i;
    srand(time(NULL));
    printf(" Random Numbers are: \n");
    for (i = 0; i <5; i++){
         // range [5; 15)
        printf(" %d", 5+rand()%10);
        }
    return 0;
}*/

/*
#include <stdio.h>
#define MAX 7
int main()
{
    char str1[MAX];
    char str2[MAX];
    fgets(str1, MAX, stdin);
    printf("string 1 is: %s\n", str1);
    puts("");
    fgets(str2, MAX, stdin);
    printf("string 2 is: %s\n", str2);
    return 0;
}
*/
//---------------------------------

// exercise 2 lab
/*
int isEven(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    while(1)
    {
        int x;
        printf("Enter the integer, -1 to exit\n");
        scanf("%d",&x);
        if (isEven(x)){
            puts("even");
        } 
        else {
            puts("odd");
        }
        if (x==-1){
            break;
        }

    }
    
}

*/


//exercise 2
/*
int func(int x){
    if(x%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    printf("Enter an integer, 0 to exit ");
    scanf("%d",&a);
    while(a!=0){
        printf("%d\n",func(a));
        printf("Enter an integer:");
        scanf("%d",&a);
    }
}
*/
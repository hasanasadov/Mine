#include <stdio.h>

//Task 2
/*
#define SIZE 6
int whatIsThis (const int b[], size_t p);
int main(void){
    int x; 
    int a[SIZE] = { 1, 2, 3, 4, 5, 6};
    x=whatIsThis (a,SIZE);
    printf("Result is %d\n", x);
}
int whatIsThis (const int b[], size_t p){
    if (1==p) {
        return b[0];
    }
    else {
        return b[p-1]*whatIsThis(b, p-1);
    }
}
*/

//Task 3
/*
#include <stdio.h>
int main(){
    int c,i=0;
    int myarray1[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    printf("enter a number :\n");
    scanf("%d",&c);
    while(c!=-1){
        printf("enter a number :\n");
        myarray1[i]=c;
        i++;
        scanf("%d",&c);
    }
    printf("len : %d \n",i);
    for(int q=0;q<i;q++){
        printf("%d ",myarray1[q]);
    }
}
*/
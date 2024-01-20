// ex06_17.c
// What does this program do?
#include <stdio.h>
#define SIZE 6
int whatIsThis (const int b[], size_t p);
int main(void){
    int x; 
    int a[SIZE] = { 1, 2, 3, 4, 5, 6};
    x = whatIsThis (a, SIZE);
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
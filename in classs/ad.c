#include <stdio.h>
#include <math.h>

//Task 8
char isps(float a){
    if (sqrt(a)==(int)(sqrt(a))){
        return '1';
    }
    else{
        return '0';
    }
}
int main(){
    float a;
    printf("put a number\n");
    scanf("%f",&a);
    printf("%c",isps(a));
}

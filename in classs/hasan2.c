#include <stdio.h>

int main(){
    int a=23;
    float b=5.6;
    double c=55.123468456;
    char f='n';
    printf("a=%d",a);
    printf("b=%f",b);
    printf("c=%lf",c);
    printf("f=%c",f);
    printf("\n");
    printf("a=%d\nb=%f\nc=%lf\nf=%c\n",a,b,c,f);
    return 0;
}
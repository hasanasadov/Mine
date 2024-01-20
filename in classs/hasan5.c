#include <stdio.h>
int main(){
    int u,a,t ;
    printf("please sign u a t \n");
    scanf("%d %d %d",&u,&a,&t);
    printf("u=%d a=%d t=%d\n",u,a,t);
    printf("v=u+at=%d\n",u+a*t);
    printf("s=ut+0.5*a(t^2)=%f\n",u*t+0.5*a*t*t);
    return 0;
}

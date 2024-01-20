#include <stdio.h>

// int main (){
    /*
    int a=23;
    float b=5764.432;
    double c=7584.5357657435;
    char f='n';
    printf("a=%d\nb=%f\nc=%lf\nf=%c\n",a,b,c,f);
    */

   /*
    int myvar;
    printf("enter myvar:\n");
    scanf("%d",&myvar);
    printf("myvar is %d\n", myvar);
    printf("adress myvar is %p\n", &myvar); //%p to specifier for adress 
    printf("adress myvar is %d\n", &myvar);
    printf("size= %d", sizeof(myvar)); // the size of variable (byte)
    */
    /*

    int a,b,c;
    printf("please enter a b c\n");
    scanf("%d, %d, %d", &a, &b ,&c );
    printf("a=%d b=%d c=%d",a ,b, c);
    */

   //lab1 task---------------1
   
   int u,a,t,v;
   float s;
   printf("enter u a t\n");
   scanf("%d %d %d", &u ,&a ,&t );
   printf("u=%d a=%d t=%d\n",u ,a ,t);
   v=u+a*t;
   printf("v=%d\n",v);
   //s= (u*t+(a*t*t)*0.5); // version 1   using 0.5 instead of 1/2
   s= u*t+(a*t*t)* (1/2.0); // version 2 using 2.0 instead of 1/2
   printf("s=%f\n",s);
   

}
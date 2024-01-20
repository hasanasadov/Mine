#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>
// USE OF MALLOC

int main(){
    int *a=malloc(sizeof(int)*10);
    for (int i=0;i<10;i++){
        a[i]=10-i;
    }
    for (int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    puts("");
    printf("adress of a: %p\n",a);
    free(a);
    for (int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
}


// USE OF CALLOC
/*
int main(){
    int *a=calloc(10,sizeof(int));
    for (int i=0;i<10;i++){
        a[i]=10-i;
    }
    for (int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    puts("");
    printf("adress of a: %p\n",a);
    free(a);
}
*/

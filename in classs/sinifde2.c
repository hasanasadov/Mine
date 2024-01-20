#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int size=0;
    int *junk;
    srand(time(NULL));
    for (int i=0; i<1000; i++){
        size=rand()%2000;
        junk=malloc(size*sizeof(int));
            for (int i=0;i<size;i++) {
            junk[i]=rand();
        }
        free(junk);
    }
    int *arr;
    int len=50;
    for (int i=0; i<len; i++){
        printf("jrr[%d]=%d\n",i, junk[i]);
    }
    arr=calloc(len,sizeof(int));
    for (int i=0; i<len; i++){
        printf("arr[%d]=%d\n",i, arr[i]);
    }
    free(arr);

    for (int i=0; i<1000; i++){
        size=rand()%2000;
        junk=malloc(size*sizeof(int));
            for (int i=0;i<size;i++) {
            junk[i]=rand();
        }
        free(junk);
    }
    for (int i=0; i<len; i++){
        printf("jrr[%d]=%d\n",i, junk[i]);
    }
}
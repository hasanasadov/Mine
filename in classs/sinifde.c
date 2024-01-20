#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int main(int argc, char *argv[]) {
    int i;
    printf("File name = %s\n", argv[0]);
    printf("Number of arguments passed = %d\n", argc-1);
    for(i = 1; i < argc; i++){
        printf("Value of Argument_%d = %s\n", i, argv[i]);
    }
}
*/

/*
int main(){
    int *a=malloc(sizeof(int)*10) ;
    for (int i=0; i<10; i++){
        a[i]=10-i;
    }
    for (int i=0; i<10; i++){
        printf("a[%d]=%d\n",i, a[i]);
    }
    puts("");
    printf("adress of a: %p\n", a);
    free(a);
}
*/

/*
int main() {
    int size=0;
    int *junk;
    srand(time(NULL));
    for (int i=0;i<1000;i++){
        size=rand()%2000;
        junk=malloc(size*sizeof(int));
        for (int i=0; i<size; i++){
            junk[i]=rand();
        }
        free(junk);
    }
    int *arr;
    int len=50;
    arr=malloc(len*sizeof(int));
    for (int i=0; i<len; i++){
        printf("arr[%d]=%d\n",i, arr[i]);
    }
    free(arr);
}
*/

/*
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
    arr=calloc(len,sizeof(int));
    for (int i=0; i<len; i++){
        printf("arr[%d]=%d\n",i, arr[i]);
    }
    free(arr);
}
*/
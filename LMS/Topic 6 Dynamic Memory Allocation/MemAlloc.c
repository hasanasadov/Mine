#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//-----------use of malloc()
/*
int main(){
    int *a=malloc(sizeof(int)*10);

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
//*/

// ----------if you dont use free() what happens
/*
void mem(){
    int *p=malloc(sizeof(int)*12800);
}
int main(){
    while(1) {
        mem()
        };
}
*/

//-----------use of calloc()
/*
int main(){
    int *a=calloc(10, sizeof(int));

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
//--------------------------free() securty
/*
int main(){
    int *a=calloc(10,sizeof(int));

    for (int i=0; i<10; i++){
        a[i]=10-i;
    }

    for (int i=0; i<10; i++){
        printf("a[%d]=%d\n",i, a[i]);
    }
    printf("\nadress of a: %p\n\n", a);

    int *temp_save=a;
    free(a);

    for (int i=0; i<10; i++){
        printf("temp_save[%d]=%d\n",i, temp_save[i]);
    }
    printf("\nadress of a: %p\n\n", temp_save);
}
*/
//------------------- dif malloc() calloc()
/*
int main(){
    int size=0;
    int *junk;
    srand(time(NULL));

    //to fill memory with junk data
    for (int i=0; i<1000; i++){
        size=rand()%2000;
        junk=malloc(size*sizeof(int));

        for (int i=0; i<size; i++){
            junk[i]=rand();
        }
        free(junk);
    }
    // allocate new array with malloc
    int *arr;
    int len=50;
    arr=calloc(len,sizeof(int));

    for (int i=0; i<len; i++){
        printf("arr[%d]=%d\n",i, arr[i]);
    }

    free(arr);
}
*/

//-----------------------realloc securty
/*
int main(){
    int len1=5, len2=3*len1;
    int *a1=malloc(len1*sizeof(int));
    int *a2=malloc(len1*sizeof(int));
    
    for (int i=0; i<len1; i++){
        a1[i]=11;
        a2[i]=22;
    }
    printf("\na1 array len= %d: \n",len1);
    for (int i=0; i<len1; i++) printf("a1[%d]=%d\n",i, a1[i]);
    printf("\na2 array len= %d: \n",len1);
    for (int i=0; i<len1; i++) printf("a1[%d]=%d\n",i, a2[i]);

    printf("a1 adress : %p\n",a1);
    printf("a2 adress : %p\n\n",a2);

    printf("a1 array len= %d: \n",len2);
    for (int i=0; i<len2; i++) printf("a1[%d]=%d\n",i, a1[i]);
    
    printf("\na1 adress before reallaoc : %p\n",a1);
    int *temp_save=a1;
    a1=realloc(a1, sizeof(int)*20);
    printf("a1 adress after reallaoc : %p\n",a1);
    printf("temp_save adress after reallaoc : %p\n",temp_save);

    for (int i=0; i<len1; i++) printf("temp_save[%d]=%d\n",i, temp_save[i]);
    for (int i=0; i<len1; i++) temp_save[i]=0; // make zero the old memory block
    printf("\ntemp_save became zero:\n");
    for (int i=0; i<len1; i++) printf("temp_save[%d]=%d\n",i, temp_save[i]);
    free(a1);
    free(a2);
}
*/

// ------------------------allocation of 2d array
/*
int main(){
    int row=3, col=3;

    int **array=malloc(sizeof(int*)*row);//allocation of rows

    for (int i=0; i<row; i++){
        array[i]=malloc(sizeof(int)*col); // allocation of columns
    }
    printf("&array= %p \n\n", array);//adress of array

   

    for (int i=0; i<row; i++){
        printf("&array[%d]= %p \n", i,&array[i]);//adress of array[i]
        printf("array[%d]= %p \n\n", i, array[i]);//value of array[i]
        for (int j=0; j<col; j++){
            printf("&array[%d][%d] = %p \n", i,j,&array[i][j]);//adress of array[i][j]
        }
        printf("\n\n");
    }
    for (int i=0; i<row; i++){
        free(array[i]); // free the columns
    }
    free(array); // free the rows columns   
}
*/


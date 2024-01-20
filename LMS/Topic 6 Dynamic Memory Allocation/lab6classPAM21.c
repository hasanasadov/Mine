#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> 
/*
int main()
{
    int len;
    int x;
    srand(time(NULL));
    printf("enter the Len: ");
    scanf("%d",&len);
    int *arr=calloc(len,sizeof(int));
    for ( x=0;x<len;x++){
        arr[x]=rand()%100;
        printf("%d\n",arr[x]);
    }
    printf("\n");

    //---realloc the arr
    arr=realloc(arr,(len/2)*sizeof(int));
    for ( x=0;x<len/2;x++){
        printf("%d\n",arr[x]);
    }

    printf("\n");
    //remaining 5 items
    for ( x=len/2;x<len;x++){
        printf("%d\n",arr[x]);
    }
    free(arr);

}
*/

//exercise 2
///*
/*int main()
{	int i;
    char *str1;
    char *str2;
    char *ptr;
    str1=malloc(12*sizeof(char));
    strcpy(str1,"Hello World");

    str2=malloc(12*sizeof(char));
    strcpy(str2,"Salam Dunya");
    printf("\nFirst String adress: %u\n",str1);
    printf("\nSecond String adress: %u\n",str2);

    printf("\nFirst String:\n");
    for ( i = 0; i < strlen(str1); i++){
        printf("%c---%u\n",*(str1+i),str1+i);}

    printf("\nSecond String:\n");
    for ( i = 0; i < strlen(str2); i++){
        printf("%c---%u\n",*(str2+i),str2+i);}

    printf("\nFirst String(length* 3):\n");
    for (size_t i = 0; i < 3*strlen(str1); i++){
        printf("%c---%p\n",*(str1+i),str1+i);}

    printf("\n\nadress of the first string(before reallocation): %u",str1);
    
    ptr=str1;
    str1=realloc(str1, 20*sizeof(char));  
    printf("\n adress of the first string(after reallocation): %u\n\n",str1);
    printf("str1= %s\n",str1);

    printf("\nThe saved address str1: %u\n\n",ptr);
    printf("ptr= %s\n",ptr);
    for ( i = 0; i < 12; i++){
        printf("%c---%u\n",*(ptr+i),ptr+i);} 
    free(str1);
    free(str2);
    free(ptr);

}*/
//*/

//exercise 3
/*
int multip(int x,float y)
{
    return x*y;
}
int sum(int x,float y)
{
    return x+y;
}
int square(int x,float y)
{
    return pow(x,y);
}

int main()
{
    int (*func_pointer[])(int , float)={multip,sum,square};
    printf("%d=Multiplication\n",func_pointer[0](5,6));
    printf("%d=Multiplication\n",func_pointer[1](10,15));   
    printf("%d=square\n",func_pointer[2](2,4));   

}
*/
//TASK 4
/*
int matrix(int row,int column,int end,int start){
    int **matrix1=malloc(sizeof(int*)*row);
    int **matrix2=malloc(sizeof(int*)*row);
    int **matrix3=malloc(sizeof(int*)*row);
    int i,j;
    for(i=0; i<row; i++){
        matrix1[i]=malloc(sizeof(int)*column);
        for(j=0; j<column; j++){
            matrix1[i][j]=rand()%end+start;
            printf("%d ",*(*(matrix1+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<row; i++){
        matrix2[i]=malloc(sizeof(int)*column);
        for(j=0; j<column; j++){
            matrix2[i][j]=rand()%end+start;
            printf("%d ",*(*(matrix2+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<row; i++){
        matrix3[i]=malloc(sizeof(int)*column);
        for(j=0; j<column; j++){
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
            printf("%d ",*(*(matrix3+i)+j));
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{
    int row,column,end,start;
    printf("The row of matrixes: ");
    scanf("%d",&row);
    printf("The column of matrixes: ");
    scanf("%d",&column);
    printf("The start of randint: ");
    scanf("%d",&start);
    printf("The end of randint: ");
    scanf("%d",&end);
    matrix(row,column,end,start);
}*/

// TASK 5
/*
int main(void)
{
    printf("Enter the size of the array:");
    int size;
    scanf("%i", &size);

    int *array1 = malloc(size * sizeof(int));
    int *array2 = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", array1 + i);
    }

    // Copying array to another one:
    for (int i = 0; i < size; i++)
    {
        *(array2 + i) = *(array1 + i);
    }

    // Printing inputted array:
    for (int i = 0; i < size; i++)
    {
        printf("  %i", *(array1 + i));
    }printf("\n\n");

    // Printing copied array:
    for (int i = 0; i < size; i++)
    {
        printf("  %i", *(array2 + i));
    }printf("\n\n");
}
*/
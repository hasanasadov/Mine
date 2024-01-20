#include <stdio.h>
/*
#define SIZE 7
int main(){
    int myarray[4];
    int myarray1[]={2,5,3,7};
    int myarray2[SIZE]={9,6,5,7};

    printf("access to myarray2[5] %d\n",myarray2[5]);
    for(int i=0; i<SIZE;i++){
        printf("%d\n",myarray2[i]);
    }
    
    return 0;
}
*/

/*
int main(){
    int myarray2[]={9,6,7,5,6,3,4,2,4,3,5,6,7,6,5,7};
    int len;
    int array_size;
    int type_size;

   array_size=sizeof(myarray2);
   type_size=sizeof(myarray2[0]);
   len=array_size/type_size; // number of items in arry
   printf("array_size= %d\n",array_size);
   printf("type_size= %d\n",type_size);
   printf("len= %d\n",len);

   for(int i=0; i<len;i++){
        printf("%d\n",myarray2[i]);
    }
    return 0;
}
*/

/*
#define ROW 2
#define COL 3

int main(){
    int multi_array[5][3];
    int multi_array2[ROW][COL]={{1, 6, 3}, {5, 9, 2}};
   
    //prints matrix form
    for (int i=0; i<ROW; i++){
        for (int j=0; j<COL; j++){
            printf("%-5d",multi_array2[i][j]);
        }
        printf("\n");
    }

    //prints in a way to see idx rows and idx columns
    for (int i=0; i<ROW; i++){
        for (int j=0; j<COL; j++){
            printf("multi_array2[%d][%d]=%d\n",i,j,multi_array2[i][j]);
        }
    }

}
*/

/*
#define SIZE 6

int summArry(int arr[], int len){
    int summ=0;
    for( int i=0; i<len;i++){
        summ+=arr[i];
    }
    return summ;
}

int main(){
    int arr[SIZE]={7,6,4,7,6,4};
    printf("summ is %d", summArry(arr,SIZE));
    return 0;
}
*/

/*
#define ROW 2
#define COL 3

void printM_A(int num[ROW][COL]){
    for (int i=0; i<ROW; i++){
        for (int j=0; j<COL; j++){
            printf("%-5d",num[i][j]);
        }
        printf("\n");
    }
}
int main(){

    int multi_array2[ROW][COL]={{1, 6, 3}, {5, 9, 2}};
    printM_A(multi_array2);
    return 0;
}
*/

/*
#include<string.h>
int main(){
    char str1[]="Nazrin";
    char str2[]="Dolkhanova";
    char str3[7];

    //append
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s\n", str1);

    //copy one tring to another
    strcpy(str3,str1);
    printf("%s", str3);
    return 0;
}
*/
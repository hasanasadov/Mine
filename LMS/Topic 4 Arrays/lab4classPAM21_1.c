#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//-----task1 ------
/*
int main(){
    double array1[20];
    for (int i=0;i<20;i++){
        printf("Enter a value:\n");
        scanf("%lf",&array1[i]);
    }
    return 0;
}
*/


/*
int main(){
    int array2[10];
    for (int i=0;i<10;i++){
        array2[i]=5+rand()%10;
        printf("%d\n",array2[i]);
    }
    return 0;
}
*/

//---------task 9
/*
int main()
{
    int myarray[3][2];
    int i,j;
    srand(time(NULL));
    for(i=0;i<3;i++){
        for (j=0;j<2;j++){
            myarray[i][j]=1+rand()%100;
            printf("%d\t",myarray[i][j]);
        
        }
        printf("\n");
    }
    int maxx=myarray[0][0];
    for(i=0;i<3;i++){
        for (j=0;j<2;j++){
            if (myarray[i][j]>maxx){
                maxx=myarray[i][j];
            }
        }
    }
    printf("Maxx is=%d",maxx);
}

*/

//exercise 13
//--------intersection
/*
int main()
{
    int A[10];
    int B[10];
    srand(time(NULL));
    printf("A matrix\n");
    for (int i = 0; i < 10; i++)
    {
        A[i]=1+rand()%10;
        printf("%d\t",A[i]);
    }
    
    printf("\n");
    printf("B matrix\n");
    for (int i = 0; i < 10; i++)
    {
        B[i]=1+rand()%10;
        printf("%d\t",B[i]);
    }
    
    printf("Common for both sides:\n");
    for (int i =0; i < 10; i++)
    {
        int check=1;
        for (int j = 0; j < i; j++)
        {
            if (A[i]==A[j])
            {
                check=0;
            }
            
        }
        if (check==1)
        {
            int flag=0;
        for (int j = 0; j < 10; j++)
        {
            if (A[i]==B[j])
            {
                flag=1;
                
            }
        }
        if (flag==1)
        {
            printf("%d\t",A[i]);
        }
        }
           
    }  
    
}
*/
#include <stdio.h>
int main(){
    int c,i=0;
    int myarray1[20]={0,0,0,0,0,0,0,0,0,0};
    printf("enter a number :\n");
    scanf("%d",&c);
    while(c!=-1){
        printf("enter a number :\n");
        myarray1[i]=c;
        i++;
        scanf("%d",&c);
    }
    printf("len : %d \n",i);
    for(int q=0;q<i;q++){
        printf("%d ",myarray1[q]);
    }
}
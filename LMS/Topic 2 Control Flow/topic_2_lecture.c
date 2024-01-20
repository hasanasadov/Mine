#include <stdio.h>
#include <string.h>

/*
int main(){
    char a[]=""; //char a[20]; 
    char b;
    
    puts("please enter variable a:");// like printf but prints only string
    gets(a); //like scanf but used for string
    puts(a);

    b=getchar(); //like scanf but inputs only singl charachter
    putchar(b);// like printf but prints only single charachter
    return 0;
}
*/

/*
int main(){
    int a;
    puts("please enter a:");
    scanf("%d",&a);
    
    if(a>0){
        puts("positive!");
        printf("%d is Positive!\n",a);
    }
    else if(a==0){
        printf("%d is Zero!\n",a);
    }
    else {
        printf("%d is not Positive!\n",a);
    }
    int b;
    puts("please enter b:");
    scanf("%d",&b);
    (b>0) ? puts("Positive"): puts("Negativ");

}
*/
/*
int main(){
    int b;
    puts("please enter number for b to see seasons name:");
    scanf("%d",&b);
    
    
    if(b==1 )
        puts("Spring");
    else if(b==2)
        puts("Summer");
    else if(b==3)
        puts("Autumn");
    else if(b==4)
        puts("winter");
    else
        puts("Wrong");

    switch (b)
    {
    case 1:
        puts("Spring");
        break;
    case 2:
        puts("Summer");
        break;
    case 3:
        puts("Autumn");
        break;
    case 4:
        puts("winter");
        break;
    
    default:
        puts("Wrong");
        break;
    }
}
*/
/*
int main(){
    int b;
    puts("please enter number for b month to see seasons name:");
    scanf("%d",&b);
    /*
    if(b==1 || b==2 || b==12)
        puts("winter");
    else if(b==3 || b==4 || b==5)
        puts("sPRING");
    else if(b==6 || b==7 || b==8)
        puts("sUMMER");
    else if(b==9 || b==10 || b==11)
        puts("Autumn");
    else
        puts("Wrong");
*/
/*
    switch (b)
    {
    case 1: case 2: case 12:
        puts("winter ");
        break;
    case 3: case 4: case 5:
        puts("Spring");
        break;
    case 6: case 7: case 8:
        puts("Summer");
        break;
    case 9: case 10: case 11:
        puts("Autumn");
        break;
    
    default:
        puts("Wrong");
        break;
    }
}
*/
/*
int main(){
    int a=0;
    while (a<5){
        puts("his there");
        a++;
    }

    for (int a=0; a<5; a++){
        puts("his there");
    }
    

    int b=0;
    do{
        puts("hi there");
        b++;
    }
    while(b<5);
    return 0;

}
*/

/*
int main(){
    int a=0;
    while (a<10){
        printf("a=%d \n",a);
        if(a==5)
            break; //STOPS WHEN A=5
        a++;
    }
}
*/

/*
int main(){
    int a=0;
    while (a<10){
        
        a++;
        if(a==5){
            continue; // skip the loop
        }
        
        printf("a=%d \n",a);
        
    }
}
*/

/*
int main()
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        printf( "Outer loop executing. i = %d\n", i );
        for ( j = 0; j < 3; j++ )
        {
            printf( " Inner loop executing. j = %d\n", j );
            if ( i == 5 )
                goto stop;
        }
    }

    // This message does not print: 
    printf( "Loop exited. i = %d\n", i );

    stop: printf( "Jumped to stop. i = %d\n", i );
}
*/

int main(){
    int x = 1;
    while ( x <= 10 ) {
        printf("%d\n",x);
        x++; //without x++ will be infinite loop
        
}
}





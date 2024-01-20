#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char c;
	int x,y,z;
	float d,e,f;
	char *ptr;
	char s1[100],s2[100];
	
	printf("Enter c: ");
	scanf("%c",&c);
	//A
	if (c>='a' && c<='z'){
		printf("Uppercase: %c\n",c-32);
	}
	//B
	printf("%c %s %s\n",c,(isdigit(c) ? "is a" : "is not a"),"digit");
	//C
	printf("%c %s %s\n",c,(iscntrl(c) ? "is a" : "is not a"),"control character");
	//D
	fgetc(stdin);
	printf("Enter s1: ");
	fgets(s1,100,stdin);
	//E
	puts(s1);
	//F
	int i=0,flag=0;
	while (s1[i]!='\0'){
		if (s1[i]==c){
			ptr=&s1[i];
			flag=1;
		}
		i++;
	}
	//G
	putchar(c);
	//H
	printf("%c %s %s\n",c,(isalpha(c) ? "is a" : "is not a"),"letter");
	//I
	scanf("%c",&c);
	//
	return 0;
}

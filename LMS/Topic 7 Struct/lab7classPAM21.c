#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//----------------tsk1
/*
struct invertory{
    char partName[30];
    int partNumber;
    float point_price;
    int stock,reorder;};

struct adress{
    char streetAdress[25];
    char city[20];
    char stat[3];
    char zipCode[6];};

struct student{
    char firstName[15] ;
    char lastName[15];
    struct adress homeAddress ;
    };

int main(){
    struct student a; 
    strcpy(a.homeAddress.zipCode,"dfdsgfd");
}
*/
//----------------------task 2
/*
struct customer {
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;
    struct {
    char phoneNumber[11];
    char address[50];
    char city[15];
    char state[3];
    char zipCode[6];
    } personal;
} customerRecord, *customerPtr;

int main(){
    customerPtr = &customerRecord;
    //a
    strcpy(customerRecord.lastName,"aa");
    printf("%s\n",customerRecord.lastName);
    //b
    printf("%s\n",customerPtr->lastName);
    //c
    strcpy(customerRecord.firstName,"bb");
    printf("%s\n",customerRecord.firstName);
    //d
    printf("%s\n",customerPtr->firstName);
    //e
    customerRecord.customerNumber=7849;
    printf("%ld\n",customerRecord.customerNumber);
    //f
    printf("%ld\n",customerPtr->customerNumber);
    //g
    strcpy(customerRecord.personal.phoneNumber,"13234345");
    printf("%s\n",customerRecord.personal.phoneNumber);
    //h
    printf("%s\n",customerPtr->personal.phoneNumber);
    //i
    strcpy(customerRecord.personal.address,"adress");
    printf("%s\n",customerRecord.personal.address);
    //j
    printf("%s\n",customerPtr->personal.address);
    //k
    strcpy(customerRecord.personal.city,"city");
    printf("%s\n",customerRecord.personal.city);
    //l
    printf("%s\n",customerPtr->personal.city);
    //m
    strcpy(customerRecord.personal.state,"state");
    printf("%s\n",customerRecord.personal.state);
    //n
    printf("%s\n",customerPtr->personal.state);
    //o
    strcpy(customerRecord.personal.zipCode,"code");
    printf("%s\n",customerRecord.personal.zipCode);
    //p
    printf("%s\n",customerPtr->personal.zipCode);  
}

*/
//task 3
/*
struct student{
	char major[30];
	int grade;
};
struct person{
	char name[30],city[30];
	int age;
	struct student info;
};
int main(){
	struct person pr[1];
	int i;
	for (i=0;i<=1;i++){
		printf("enter the %d student : ",i+1);
		printf("\nname: ");
		scanf("%s",pr[i].name);
		printf("\nage: ");
		scanf("%d",&pr[i].age);
		printf("\ncity: ");
		scanf("%s",pr[i].city);
		printf("\nmajor: ");
		scanf("%s",pr[i].info.major);
		printf("\ngrade: ");
		scanf("%d",&pr[i].info.grade);
		printf("students [%d]----> %s %d %s %s %s %d\n",i,pr[i].name,pr[i].age,pr[i].city,pr[i].info.major,pr[i].info.grade);
	}
	
}
*/
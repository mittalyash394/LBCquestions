#include<stdio.h>
#include<stdlib.h>
void main()
{
	char Firstname[15], MiddleName[10], LastName[10];
	printf("Enter the first name :");
	scanf("%s",Firstname);
	printf("Enter the Middle name :");
	scanf("%s",MiddleName);
	printf("Enter the last name :");
	scanf("%s",LastName);
	printf("Your full name is %s %s %s",Firstname,MiddleName,LastName);
}

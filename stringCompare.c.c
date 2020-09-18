#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char string1[100],string2[100];
	int index, result;
	printf("Enter the string 1 :\n");
	gets(string1);
	printf("Enter the string 2 :\n");
	gets(string2);
	result= strcmp(string1,string2);
	printf("%d", result);
	return 0;
}

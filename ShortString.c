#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char firstName[10], lastName[10], character;
	int index;
	printf("Enter the first Name :\n");
	scanf("%s",firstName);
	printf("Enter the last Name :\n");
	scanf("%s",lastName);
	printf("%c. ",firstName[0]);
	printf("%s",lastName);
	return 0;
	/*char string[100], character;
	int index;
	printf("Enter the string :\n");
	gets(string);
	printf("%c.",string[0]);
	for(index=0; index<=strlen(string); index++)
	{
		character= string[index];
		if(character == ' ')
		{
			printf("%s",character);
		}
		else
		{
			printf("%s", character);
		}*/
}
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    int index;
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*s",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}*/

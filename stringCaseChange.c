#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char string[100];
	int index;
	printf("Enter the string : \n");
	fgets(string, sizeof(string), stdin);
	for(index = 0 ; index<=strlen(string) ; index++)
	{
		if(string[index]>= 'A' && string[index]<= 'Z')
		{
			string[index]= string[index]+32;
		}
		else if(string[index] >= 'a' && string[index]<='z')
		{
			string[index]= string[index]-32;
		}
	}
	printf("%s",string);
	return 0;
}

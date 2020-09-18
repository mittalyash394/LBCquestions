#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char string1[50], string2[50], temp[50];
	int index1, index2;
	printf("Enter the String 1 :\n");
	gets(string1);
	printf("Enter the String 2 :\n");
	gets(string2);
	for(index1 = 0; index1 <= strlen(string1); index1++)
	{
		for(index2 = 0; index2 <= strlen(string2); index2++)
		{
			if(strcmp(string1, string2) > 0)
			{
				strcpy(temp, string1);
				strcpy(string1, string2);
				strcpy(string2, temp);
			}
			else if(strcmp(string2, string1) > 0)
			{
				strcpy(temp, string2);
				strcpy(string2, string1);
				strcpy(string1, temp);
			}
			else
			{
				printf("Both strings are equal\n");
				break;
			}
		}
	}
	for(index1 =0; index1 <= strlen(temp); index1++)
	{
		printf("%s", temp[index1]);
	}
	return 0;
}

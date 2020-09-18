#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char string[100], ch;
	int noVowels=0, index;
	printf("Enter the string: ");
	fgets(string, sizeof(string), stdin);
	for(index=0;index<=' ';index++)
	{
		ch= string[index];
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			noVowels++;
		}
	}
	printf("%d",noVowels);
}

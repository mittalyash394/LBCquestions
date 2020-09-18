#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char string[100],ch;
	int index, noofwords=0;
	printf("Enter the string:\n");
	fgets(string, sizeof(string), stdin);
	for(index=0; index<=strlen(string); index++)
	{
		ch= string[index];
		if(ch==' ' || ch== '\t' || ch=='\n')
		{
			noofwords++;
		}
	}
	printf("%d", noofwords);
	return 0;
}

#include<stdio.h>
#include<Stdlib.h>
int main()
{
	char string[100];
	int upper=0, index, lower=0;
	printf("Enter the string: ");
	fgets(string, sizeof(string), stdin);
	for(index=0; index<=' '; index++)
	{
		if(string[index] >= 'A' && string[index] <= 'Z')
		{
			upper++;
		}
		else if(string[index] >= 'a' && string[index] <= 'z')
		{
			lower++;
		}
	}
	printf("%d", upper+lower);
	return 0;
}

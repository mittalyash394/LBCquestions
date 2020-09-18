#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string[100];
	int Cletters = 0,i;
	printf("Enter the string: ");
	fgets(string, sizeof(string), stdin);
	for(i=0; i<=' '; i++)
	{
		if(string[i] >= 'A' && string[i] <= 'Z')
		{
			Cletters++;
		}
	}
	printf("%d",Cletters);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char Name[10], vowel;
	int index;
	printf("Enter the 5 Names:\n");
	for(index=0; index<=4; index++)
	{
		scanf("%s",&Name[index]);
	}
	if(Name[0][0]=='A'||Name[0][0]=='E'||Name[0][0]=='I'||Name[0][0]=='O'||Name[0][0]=='U')
	{
		printf("%s",Name[0]);
	}
	else if(Name[1][0]=='A'||Name[1][0]=='E'||Name[1][0]=='I'||Name[1][0]=='O'||Name[1][0]=='U')
	{
		printf("%s",Name[1]);
	}
	else if(Name[2][0]=='A'||Name[2][0]=='E'||Name[2][0]=='I'||Name[2][0]=='O'||Name[2][0]=='U')
	{
		printf("%s",Name[2]);
	}
	else if(Name[3][0]=='A'||Name[3][0]=='E'||Name[3][0]=='I'||Name[3][0]=='O'||Name[3][0]=='U')
	{
		printf("%s",Name[3]);
	}
	else if(Name[4][0]=='A'||Name[4][0]=='E'||Name[4][0]=='I'||Name[4][0]=='O'||Name[4][0]=='U')
	{
		printf("%s", Name[4]);
	}
	else
	{
		printf("Enter the name which starts from vowels\n");
	}
	return 0;
}

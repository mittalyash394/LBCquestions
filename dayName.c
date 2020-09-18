#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int dayNo;
	printf("Enter the day no, you want a day name\n");
	scanf("%d",&dayNo);
	if(dayNo == 1 )
	{
		printf("Monday");
	}
	else if(dayNo == 2 )
	{
		printf("Tuesday");
	}
	else if(dayNo == 3)
	{
		printf("Wednesday");
	}
	else if(dayNo == 4)
	{
		printf("Thursday");
	}
	else if(dayNo == 5)
	{
		printf("Friday");
	}
	else if(dayNo == 6)
	{
		printf("Saturday");
	}
	else if(dayNo == 7)
	{
		printf("Sunday");
	}
	return 0;
}

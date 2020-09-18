#include<stdio.h>
#include<stdlib.h>
int main()
{
	int number, remainder, rnumber=0,n;
	printf("Enter the number :\n");
	scanf("%d",&number);
	n=number;
	while(n !=0)
	{
		remainder= n%10;
		rnumber = rnumber*10 + remainder;
		n = n/10;
	}
	if(rnumber == number)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not a palindrome no");
	}
	return 0;
}

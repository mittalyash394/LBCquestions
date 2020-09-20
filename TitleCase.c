#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	char string[20];
	int index, noofspaces=0;
	printf("Enter the string\n");
	gets(string);
	for(index=0; index<strlen(string); index++){
		if(string[index]>='a' && string[index]<='z'){
			string[index]= string[index]-32;
		}
		else if(string[index]==' '){
			noofspaces++;
		}
		else{
			string[index]= string[index]+32;
		}
		//printf("%s",string[index]);
	}
	printf("%s",string);
	return 0;
}

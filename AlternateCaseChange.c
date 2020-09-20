#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
	
	//if the first character is of small letters
	char string[20], noofspaces=0;
	int index;
	printf("Enter the string\n");
	fgets(string, sizeof(string),stdin);
	for(index=0; index<strlen(string); index++){
		if(index%2==0){
			if(string[index]>= 'a' && string[index]<= 'z'){
				string[index]= string[index]-32;
			}
			else{
				string[index]= string[index]+32;
			}
		}
	}
	printf("%s",string);
	return 0;
}

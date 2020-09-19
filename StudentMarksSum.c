#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int number_of_students, marks[1000], index, sum=0;
	char gender;
	scanf("%d", &number_of_students);
	for(index=0; index< number_of_students; index++){
		scanf("%d", &marks[index]);
	}
	scanf("%s",gender);
	for(index=0; index< number_of_students; index++){
		if(gender=='b'){
			sum= sum+marks[index]+marks[index+2];
			printf("%d",sum);
		}
		else if(gender == 'g'){
			sum= sum+ marks[index+1] + marks[index+2];
			printf("%d",sum);
		}
	}
	return 0;
}

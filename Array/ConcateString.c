#include <stdio.h>
#include<string.h>

int main(){
	char destination[50];
	char source[50];
	
	printf("Write destination Word: %s");
	gets(destination);
	printf("Write source Word: %s");
	gets(source);
	
	
	printf("Concatenated string is : %s \n", strcat(destination, source));
	
	getch();
	return 0;
}

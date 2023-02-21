#include<stdio.h>
#include<string.h>

int main(){
	char str1[50];
	char str2;
	char str3[50];
	
	printf("Write First String: %s\n ");
	gets(str1);
	
	printf("Write Second String: %s\n ");
	str2 = getchar();
	
	int str1Len = strlen(str1);
	
	int i = 0, j = 0, count = 0;
	
	for(i = 0; i <= str1Len; i++){
		if(str1[i] == str2){
			// str3[i] = str1[i];
			count++;
		}
	}
	
	if(count > 0){
		printf("Value Is: %s ", count);	
	}
	
	getch();
	
	return 0;
}

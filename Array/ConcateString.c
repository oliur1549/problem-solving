/*
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

// withour build finction - Using While Loop

#include <stdio.h>
#include<string.h>

int main(){
	char str1[50];
	char str2[50];
	
	char str3[100];
	
	printf("Write First String: %s\n ");
	gets(str1);
	
	printf("Write Second String: %s\n ");
	gets(str2);
	
	int i = 0, j=0;
	
	while(str1[i] != '\0'){
		str3[j] = str1[i];
		i++;
		j++;
	}
	
	i = 0;
	
	while(str2[i] != '\0'){
		str3[j] = str2[i];
		i++;
		j++;
	}
	 
	 
	 str3[j] = '\0';
	 
	
	printf("Concatenated string is : %s \n", str3);
	
	getch();
	return 0;
}



// withour build finction - Using For Loop

#include <stdio.h>
#include<string.h>

int main(){
	char str1[50];
	char str2[50];
	
	printf("Write First String: %s\n ");
	gets(str1);
	
	printf("Write Second String: %s\n ");
	gets(str2);
	
	int str1Len = strlen(str1);
	int str2Len = strlen(str2);
	
	int i;

	for(i = 0; str2Len != i; i++){
		str1[str1Len + i] = str2[i];
	}
	 
	str1[str1Len + i] = '\0';
	 
	
	printf("Concatenated string is : %s \n", str1);
	
	getch();
	return 0;
}


// withour build finction - Using Recursion

#include <stdio.h>
#include<string.h>

void concat_string(char* str1, char* str2){
	
	int str2Len = strlen(str2);
	int str1Len = strlen(str1);
	
	static int i = 0;

	if(!str2[i]){
		str2[i] = '\0';
	}
	else{
		str1[str1Len + i] = str2[i];
		i++;
		concat_string(str1, str2);
	}
	 
}

int main(){
	char str1[50];
	char str2[50];
	
	printf("Write First String: %s\n ");
	gets(str1);
	
	printf("Write Second String: %s\n ");
	gets(str2);
	
	concat_string(str1, str2);
	
	printf("Concatenated string is : %s \n", str1);
	
	getch();
	return 0;
}
*/



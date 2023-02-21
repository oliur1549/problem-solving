/*
#include <stdio.h>

int linearSearch(int arr[], int x, int n){
	int i;
	for(i = 0; i < n; i++){
		if(arr[i] == x){
			return i;
			
		}
	}
	return -1;
}

int main (){
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 120;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int result = linearSearch(arr, x, n);
	
	if(result == -1) {
		printf("Not Found!");
	} else{
		printf("Result is : %d " , result);
	}
	
	return 0;
}
*/

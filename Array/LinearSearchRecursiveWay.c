
#include <stdio.h>


int linearSearchRecursive(int arr[], int x, int n){
	if(n == 0){
		return -1;
	}
	else if(arr[n - 1] == x){
		return n - 1;
	}
	else{
		int res = linearSearchRecursive(arr, x, n - 1);
		return arr[res];
	}
}


int main(){
	int arr[] = { 5, 15, 6, 9, 4 };
	int x = 6;
	int n = sizeof(arr) / sizeof(arr[0]) + 1;
	
	int result = linearSearchRecursive(arr, x, n);
	
	if(result == -1) {
		printf("Not Found!");
	} else{
		printf("Result is : %d " , result);
	}
	
	return 0;
}



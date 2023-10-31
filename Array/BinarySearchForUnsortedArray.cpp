#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int target){
	
	int left, right, mid;
	left = 0;
	right = n-1;
	while(left<=right){
		mid = (left+right)/2;
		
		if(target == arr[mid]){
			return mid;
		}
		else if(target > arr[mid]){
			left = mid + 1;
		}
		else if(target < arr[mid]){
			right = mid - 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = {7, 2, 10, 1, 5, 9};
	//int arr[] = {1,2,5,7,9,10};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int target = 2;
	
	sort(arr, arr + n);
	
	int result = BinarySearch(arr, n, target);
	
	if(result != -1){
		cout << "Element found at index " << result << endl;
	}
	else{
		cout << "Element not found" << endl;
	}
	
	return 0;
}


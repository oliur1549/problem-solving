// C++ code to implement the idea
/*
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum
// and maxximum of the array
pair<int, int> findMinMax(int arr[], int n)
{
	int min = arr[0];
	int max = arr[0];
	
	for(int i = 0; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		else if (arr[i] > max){
			max = arr[i];
		}
	}
	return {min , max};
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	pair<int, int> ans = findMinMax(arr, N);
	cout << "Maximum is: " << ans.second << endl;
	cout << "Minimum is: " << ans.first;
	return 0;
}
*/

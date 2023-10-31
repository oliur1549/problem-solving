// Including necessary header files
/*
#include <bits/stdc++.h>
using namespace std;

// Function to find the index of first repeating element in
// an array
int firstRepeatingElement(int arr[], int n)
{
	// Nested loop to check for repeating elements
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			// If a repeating element is found, return its
			// index
			if (arr[i] == arr[j]) {
				return i;
			}
		}
	}
	// If no repeating element is found, return -1
	return -1;
}

// Driver code
int main()
{
	// Initializing an array and its size
	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Finding the index of first repeating element
	int index = firstRepeatingElement(arr, n);

	// Checking if any repeating element is found or not
	if (index == -1) {
		cout << "No repeating element found!" << endl;
	}
	else {
		// Printing the first repeating element and its
		// index
		cout << "First repeating element is " << arr[index]
			<< endl;
	}

	return 0;
}

// Using Hash Set

/* C++ program to find first repeating element in arr[] 
#include <bits/stdc++.h>
using namespace std;

// This function prints the first repeating element in arr[]
void printFirstRepeating(int arr[], int n)
{
	// Initialize index of first repeating element
	int min = -1;

	// Creates an empty hashset
	set<int> myset;

	// Traverse the input array from right to left
	for (int i = n - 1; i >= 0; i--) {
		// If element is already in hash set, update min
		if (myset.find(arr[i]) != myset.end())
			min = i;

		else // Else add element to hash set
			myset.insert(arr[i]);
	}

	// Print the result
	if (min != -1)
		cout << "The first repeating element is "
			<< arr[min];
	else
		cout << "There are no repeating elements";
}

// Driver Code
int main()
{
	int arr[] = { 10, 5, 3, 4, 3, 5, 6 };

	int n = sizeof(arr) / sizeof(arr[0]);
	printFirstRepeating(arr, n);
}
// This article is contributed by Chhavi
*/

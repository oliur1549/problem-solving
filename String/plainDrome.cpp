#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[])
{
	int l = 0;
	int r = strlen(str) - 1;
	
	while(l < r){
		if(str[l++] != str[r--]){
			cout << "NO \n";
			return false;
		}
	}
	cout << "YES \n";
	return true;
}

// Driver program to test above function
int main()
{
	isPalindrome("abba");
	isPalindrome("abbccbba");
    isPalindrome("geeks");
	return 0;
}


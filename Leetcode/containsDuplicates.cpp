#include <iostream>
using namespace std;

int main() {
	
	int nums[] = {1,2,3,2};
	int len = sizeof(nums) / sizeof(nums[0]);
	string result = "";
	
	for(int i = 0; i < len; i++){
		int res = 0;
		for(int j = 0; j < len; j++){
			if(nums[i] == nums[j]){
				res++;
			}
		}
		if(res >= 2)
		{
			result = "true";
			break;
		}
		else{
			result = "false";
			continue;
		}
	}

	cout << "Result is: " << result;
	return 0;
}


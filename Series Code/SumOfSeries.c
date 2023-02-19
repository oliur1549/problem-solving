#include<stdio.h>

// Using formula
		/*	int main(){
				int i, n, sum = 0;
				
				printf("Enter the number of Terms: ");
				scanf("%d", &n);
				
				sum = (n * (n + 1)) / 2;
				
				printf("Sum is : %d\n", sum);
				
				return 0;
			}
		*/

	// using Iteration
		/*
			int main(){
				int i, n, sum = 0;
				
				printf("Enter the number of Terms: ");
				scanf("%d", &n);
				
				
				for(i = 0; i <= n; i++){
					sum += i;
				}
				
				printf("Sum is : %d\n", sum);
				
				return 0;
			}
		*/
// recursive way
int recursive_func(int n){
	if(n == 0)
		return 0;
		
	return n + recursive_func(n - 1);

}
/*
int main(){
	int n, sum = 0;
	
	printf("Enter the number of Terms: ");
	scanf("%d", &n);
	
	sum = recursive_func(n);
	
	
	printf("Sum is : %d\n", sum);
	
	return 0;
}

*/

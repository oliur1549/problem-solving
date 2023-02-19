#include<stdio.h>

int main(){
	int x, y;
	
	printf("Enter two numbers :");
	scanf("%d %d", &x, &y);
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf("Swap number is : %d %d", x, y);
	
	return 0;
}

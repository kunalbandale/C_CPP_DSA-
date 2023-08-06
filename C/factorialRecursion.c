// factorial using recursion function in C example
#include <stdio.h>

int fact(int n) {
	int res;
	if(n==0)
		res = 1;
	else 
		res = n * fact(n-1);
	
	return res;
}

int main() {
	int n , res ;
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	res = fact(n);
	printf("Factorial %d" , res);
	
}
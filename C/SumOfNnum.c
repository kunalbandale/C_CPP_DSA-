//WAP to print sum of first n numbers

#include<stdio.h>

int main() {
	int sum = 0 , n;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	for(int i = 1; i <=n ; i++) {
		sum = sum + i;
	}
	printf("%d", sum);

	return 0;
}
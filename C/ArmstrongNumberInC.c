#include<stdio.h>

int main() {
	int temp , n , cube , remainder , sum = 0;
	
	printf("Enter Any Number:");
	scanf("%d",&n);
	
	temp = n;
		
	while(n > 0) {
		remainder = n % 10;
		cube = (remainder * remainder * remainder);
		sum += cube;
		n = n / 10;
	}
	n = temp;
	if(n == sum) {
		printf("It is a Armstrong Number");
	} else {
		printf("It is not an Armstrong Number");	
	}
	
	return 0;
}
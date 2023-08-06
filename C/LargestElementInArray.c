// largest element in the array
#include<stdio.h>

int main() {
	int large , i;
	
	int arr[6] = {3,43,23,6,12,11};
	
	// add first value as large , consider it
	large = arr[0];
	
	for(i=0;i<7;i++) {
		if(arr[i] > large) {
			large = arr[i];
		}
	}
	printf("Largest Value: %d",large);
	
	
	return 0;
}
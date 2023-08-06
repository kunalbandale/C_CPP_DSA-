//runtime error - out of memory recursive function example

#include<stdio.h>

int main() {
	printf("START");
	main();
	printf("END");
}
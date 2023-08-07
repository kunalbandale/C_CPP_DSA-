// strlen() in c
#include<stdio.h>
#include<string.h>

int main() {
	
	char str[30];
	int len;
	
	printf("Enter Any String");
	gets(str);
	
	len = strlen(str);
	
	printf("Length of %s is %d",str,len);
	
	return 0;
}
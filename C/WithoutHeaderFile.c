// find len without strlen()

#include<stdio.h>

int StringLen(char x[]) {
	int i=0,count=0;
	
	while(x[i]!='\0') {
		count++;
		i++;
	}
	return count;
}


int main() {
	char str[30];
	int len;
	
	printf("Enter Any String:");
	gets(str);
	
	len = StringLen(str);
	
	printf("Lenght: %d",len);
	return 0;
}
#include<iostream>
 using namespace std;
 
 int main() {
 	
 	int i=5 , j;
 	
//	++i;
//	j = i++;
//	j = ++i;
	j = 2 * ++i + 2 * i++;
 	cout << i << j << endl;
 	
 	
 	return 0;
 }

#include <iostream>
 using namespace std;
 
 int main() { 
 	
	string str = "HELLO";
	
//	range - 65 - - - 90
	cout << "Before  " << str << endl;
	for(int i = 0 ; str[i] != '\0' ; i++) {
		str[i] = str[i] + 32;
	}	
	cout << "After  " ;
	for(int i = 0 ; str[i] !='\0';i++) {
		cout << str[i];
	}
 	
 	return 0;
 }
 

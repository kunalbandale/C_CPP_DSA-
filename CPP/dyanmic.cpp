#include <iostream>
 using namespace std;
 
 int main() {
 	int a = 10 , b = 5;
 	
 	if (true){
 		int c = a+b;
 		cout << c << endl;
	 }
//	 cout << c << endl; | error - out of scope
 	return 0;
 }

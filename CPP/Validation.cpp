#include <iostream>
 using namespace std;
 
 int main() {
 	
 	int a , b , div;
 	
 	cout << "Enter two numbers :" << endl;
 	cin >> a >> b;
 	
 	if (b==0) {
 		cout << "Can't Divide by Zero.. Try Again" << endl;
	 } 
	 div = a / b;
	 cout << "divison: " << div << endl;
 	

 	
 	return 0;
 }

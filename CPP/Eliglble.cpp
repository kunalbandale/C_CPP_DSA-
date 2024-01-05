#include <iostream>
 using namespace std;
 
 int main() {
 	
 	int age;
 	
 	cout << "Enter Age" << endl;
 	cin >> age;
 	
 	if(age <=12 || age >= 50){
 		cout << "Eligible for offer " << endl;
 	
	 } else {
	 	cout << "Not Eligible for offer " << endl;
	 }

 	return 0;
 }

#include <iostream>
 using namespace std;
 
 int main() {
 	
 	int age;
 	
 	cout << "Enter Age" << endl;
 	cin >> age;
 	
 	if(age >=12 && age <= 50){
 		cout << "Young" << endl;
	 } else {
	 	cout << "Not Young" << endl;
	 }

 	return 0;
 }

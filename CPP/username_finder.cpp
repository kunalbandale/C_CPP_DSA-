#include <iostream>
 using namespace std;
 
 int main() {
 	string email = "abc@gmail.com";
 	int i = email.find('@');
 	string uname = email.substr(0,i);
 	
 	cout << "username:" << uname << endl;
 	return 0;
 }

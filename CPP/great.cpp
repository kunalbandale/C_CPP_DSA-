#include <iostream> 
 using namespace std;
 
 int main() {
 	int a,b,c;
 	
 	cout << "Enter three Numbers:" << endl;
 	cin >> a >> b >> c;
 	
 	if(a > b && a > c) {
 		cout << "a is greatest " << a << endl;
	 } else if(b>c) {
 		cout << "b is greatest " << b << endl;
	 } else {
	 	cout << "c is greatest " << c << endl;
	 }
	 return 0;
 	
 }

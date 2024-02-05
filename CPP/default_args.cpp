#include <iostream>
 using namespace std;
 
 int sum(int a=0 , int b=0, int c=0) {
 	return a + b + c;
 }
 
 int main() {
 	cout << sum() << endl;
 	cout << sum(4) << endl;
 	cout << sum(4,5) << endl;
 	cout << sum(3,4,5) << endl;
 	return 0;
 }

#include <iostream>
 using namespace std;
 
 inr g = 5; // global var
 
 void fun() {
 	int a = 10; // local var
 	a++;
 	cout << a << endl;
 	cout << g << endl;
 }
 
 int main() {
 	cout << g << endl;
 }

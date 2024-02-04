#include<iostream>
 using namespace std;
 
 int sum (int x , int y) {
 	return x + y;
 }
 float sum (float x , float y) {
 	return x+y;
 }
 int sum (int x , int y , int z) {
 	return x + y + z;
 }
 
 
 int main() {
 	
 	cout << sum(3,4) << endl;
 	cout << sum(3.5f,3.4f) << endl;
 	cout << sum(45,32,43) << endl;
 	
 	
 	return 0;
 }

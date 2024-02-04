#include <iostream>
 using namespace std;
 
 
 int min(int x , int y) {
 	if(x<y) {
 		return x;
	 } else {
	 	return y;
	 }
 }
 int min(int x , int y , int z) {
 	if(x<y && x<z) {
 		return x;
	 } else if(y<z) {
	 	return y;
	 } else {
	 	return z;
	 }
 }
 
 
 int main() {
 	cout << min(4,3) << endl;
 	cout << min(1,2,3) << endl;
 	return 0;
 }

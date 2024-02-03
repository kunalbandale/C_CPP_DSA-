#include <iostream>
 using namespace std;
 
 int GreatestNum(int x , int y , int z){
 	if(x > y && x > z) {
 		return x;
	 } else if(y>z){
	 	return y;
	 } else {
	 	return z;
	 }
 }
 
 int main() {
 	
 	cout << "Greatest Number " << GreatestNum(100,20,3) << endl;
 	return 0;
 }

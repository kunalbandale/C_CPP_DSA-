#include <iostream>
 using namespace std;
 
 float add(float x , float y) {
 	float z;
 	z = x + y ;
 	return z;
 } 
 
 int main() {
 	float x = 2 , y = 7 , z ;
 	
 	z = add(x,y);
 	
 	cout << "Sum is " << z << endl;
 	return 0;
 }

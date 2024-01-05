#include<iostream>
 using namespace std;
 
 int main() {
 	// area of circle
	// pi*r*r
	float radius;
	const float PI = 3.14;
	
	cout << "Enter Radius of Circle:" << endl;
	cin >> radius;
	
	float area = PI*radius*radius;
	
	cout << area << endl;

 	return 0;
 }



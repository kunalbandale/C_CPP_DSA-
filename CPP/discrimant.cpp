#include <iostream> 
#include <cmath>
 using namespace std;
 
 int main() {
 	float a , b , c , d , r1 , r2;
 	
 	cout << "Enter Value of a , b , c " << endl;
 	cin >> a >> b >> c;
 	
 	d = b*b-4*a*c;
 	
 	if(d==0) {
 		cout << "roots are real and equal " << endl;
 		cout << (-b/(2*a));
	 } else if (d > 0) {
	 	cout << "roots are real and unequal" << endl;
	 	cout << "r1 " <<(-b+sqrt(d))/(2*a);
	 	cout << "r2 " << (-b-sqrt(d))/(2*a);
	 } else {
	 	cout << "roots are imaginary" << endl;
	 }
 	
 
	 return 0;
 	
 }

// quadratic equ.
#include <iostream>
#include <cmath>
 using namespace std;
 
 int main() {
 	
 	float a,b,c;
 	
 	cout << "Enter Co-eff." ;
 	cin >> a >> b >> c;
 	

 	float result_1 = -b+sqrt(b*b-4*a*c)/(2*a);
 	float result_2 = -b-sqrt(b*b-4*a*c)/(2*a);
 	
 	cout << "Roots are" << result_1 <<" " << result_2 ;
 	
 	return 0;
 }

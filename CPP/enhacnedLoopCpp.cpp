#include <iostream>
 using namespace std;
 
 int main() {
 	
 	int a[10] = {2,4,6,8,10,12};
 	int sum = 0;
 	
 	for(int x:a)
 		sum = sum + x;
 		
 	cout << "Sum of all elements is " << sum << endl;
 	
 	return 0;
 }

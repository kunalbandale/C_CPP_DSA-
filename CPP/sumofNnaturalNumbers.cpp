#include<iostream>
 using namespace std;
 
 int main() {
 	int i, sum = 0 , n;
 	
 	cout << "Enter Any Positive Number" << endl;
 	cin >> n;
 	
 	for(i = 1 ; i <=n;i++) {
 		sum = sum + i;
	 }
	 cout << "Sum of " << n << " is " << sum << endl;
 

 	return 0;
 }

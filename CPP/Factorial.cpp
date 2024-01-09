#include<iostream>
 using namespace std;
 
 int main() {
 	int i, fact = 1 , n;
 	
 	cout << "Enter Any Positive Number" << endl;
 	cin >> n;
 	
 	for(i = 1 ; i <= n ; i++) {
 		fact*=i;
	 }
	 cout << "Factorial: " << fact << endl;
 

 	return 0;
 }

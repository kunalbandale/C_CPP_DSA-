#include <iostream>
 using namespace std;
 
 int main() {
 	int n,r;
 	
 	cout << "Enter Any Number" << endl;
 	cin >> n;
 	
 	while(n!0) {
 		r=n%10;
 		n=n/10;
 		rev = rev*10+r;
 	}
 	
 	return 0;
 }

#include <iostream>
 using namespace std;
 
 int main() {
 	int n,r,rev=0,m;
 	
 	cout << "Enter Any Number" << endl;
 	cin >> n;
 	n=m;
 	
 	while(n!=0) {
 		r=n%10;
 		n=n/10;
 		rev = rev*10+r;
 	}
 	if(rev==m){
 		cout << "palindrome Number";
	 }else {
	 	cout << "Not a palindrome Number";
	 }
 	
 	return 0;
 }

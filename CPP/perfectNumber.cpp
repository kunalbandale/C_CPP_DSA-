#include<iostream>
 using namespace std;
 
 int main() {
 	int i, n , sum;
 	
 	cout << "Enter Any Number" << endl;
 	cin >> n;
 	
 	for(i=1;i<=n;i++) {
 		if(n%i==0)
 			sum += i; 
	}
	cout << sum;
		 if(2*n==sum){
		 	cout << "Perfect Number" << endl;
		 }else {
		 	cout << "Not a perfect Number" << endl;
		 }
		 
 	return 0;
 }

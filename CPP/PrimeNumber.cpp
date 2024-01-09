#include<iostream>
 using namespace std;
 
 int main() {
 	int i,count=0 , n;
 	
 	cout << "Enter Any Number" << endl;
 	cin >> n;
 	
 	for(i=1;i<=n;i++) {
 		if(n%i==0){
 			count++;
		 }
	 }
	 if(count==2){
	 	cout << "Prime Number";
	 } else {
	 	cout << "Not a prime Number";
	 }
 	
 	
 	return 0;
 }

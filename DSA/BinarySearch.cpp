#include <iostream>
 using namespace std;
 
 int main() {
 	
 	int a[5] = {34,54,12,35};
 	int l=0,h=4 , key , mid;
 	
 	cout << "Enter Key" << endl;
 	cin >> key;
 	
 	while(l<=h) {
 		mid = (1+h)/2;
 		if(key==a[mid]){
 			cout << "found at " << mid;
 			return 0;
		 } else if(key < a[mid]){
		 	h = mid-1;
		 } else {
		 	l = mid + 1;
		 }
	 }
 	cout << "NOT FOUND";
 	
 }

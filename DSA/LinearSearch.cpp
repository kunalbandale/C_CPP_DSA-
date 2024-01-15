#include <iostream>
 using namespace std;
 
 int main() {
 	int key,n=5;
 	int arr[5];
 	
 	cout << "Enter Any Five Numbers:" << endl;
 	for(int i = 0 ; i < n ; i++){
 		cin >> arr[i];
	 }
	 
	 cout << "Enter Element You Want to Find";
	 cin >> key ;
	 
	 for(int i = 0; i < n ; i++){
	 	if(arr[i]==key){
	 		cout << "Element Found " << key << " at " << i;
	 		return 0;
		 }
	 }
	 cout << "Element Not Found" << endl;
 	
 	
 	return 0;
 }

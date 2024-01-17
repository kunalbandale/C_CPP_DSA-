#include<iostream>
 using namespace std;
 
 int main() {
 	int a[2][3] = {{0,23,3},{18,5,60}};
 	int b[2][3] = {{7,8,9},{10,11,12}};
	int c[2][3];
	
	 
 	// Addition
 	for(int i=0;i<2;i++) {
 		
 		for(int j=0;j<3;j++) {
 			
 			c[i][j] = a[i][j] - b[i][j];
		 }
	 }
	 // displaying the elements
	 	for(int i=0;i<2;i++) {
 		
 		for(int j=0;j<3;j++) {
 			
 			cout <<	c[i][j] << " ";
		 }
		 cout << endl;
	 }



 	return 0;
 }

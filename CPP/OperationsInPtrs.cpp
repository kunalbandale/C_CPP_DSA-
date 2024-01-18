#include <iostream>
 using namespace std;
 
 int main() {
 	int a[5] = {2,4,6,8,10};
 	int *p = a;
 	
 	cout << *p << endl;
 	p++;
 	cout << *p << endl;
 	p--;
 	cout << *p << endl;
 	
 	cout << *p << endl;
 	cout << *(p + 2) << endl;
 	
 	for(int i = 0 ; i < 5 ; i++) {
// 		cout << i[a] << endl;
//		cout << a[i] << endl;
//		cout << *(A+i) << endl;
		cout << p[i] << endl;
		
	 }
 	
 	
 	
 
 	return 0;
 }

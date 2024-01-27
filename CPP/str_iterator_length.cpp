#include <iostream>
 using namespace std;
 
 int main() {
 	
 	string str = "hELLO";
 	int count = 0;
 	string::iterator it;
 	
 	for(it=str.begin();it!=str.end();it++) {
 		count++;
	 }
	 cout << count << endl;
 	
 	
 	
 	return 0;
 }

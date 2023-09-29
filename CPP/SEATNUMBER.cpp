#include <iostream>
using namespace std;

int main() {
	int testCases , n;
	
	cin >> testCases;
	
	while(testCases--) {
	    cin >> n;
	    
	    if(n>=1 && n<=15) {
	        
	        if(n>= 11 && n<=15) {
	            cout << "Lower Single" << endl;
	        } else {
	            cout<< "Lower Double" << endl;
	        }
	    } else {
	        if(n >= 16 && n <= 30) {
	            if(n >= 26 && n<= 30) {
	                cout << "Upper Single" << endl;
	            } else {
	                cout << "Upper Double" << endl;
	            }
	        }
	    }

	    
	   
	  
	}
	return 0;
}

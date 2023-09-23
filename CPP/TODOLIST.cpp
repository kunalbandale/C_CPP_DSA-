#include <iostream>
using namespace std;

int main() {
	int n1,n2,t;

	
	cin >> t;
	
	while(t--) {
	    cin >> n1;
	    int count = 0;
	    
	    while(n1--) {

	        cin >> n2 ;
	        
	        if(n2 >= 1000) {
	            count++;
	        }
	        
	    }
	      cout << count << endl;
	        
	  
	    
	}
	    
	   
	return 0;
}

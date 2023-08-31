#include <iostream>
using namespace std;

int main() {
	// chefario - speical move x reinterpret_cast
	// y  pts 
	int testCases;
	int x , y;
	
	cin >> testCases;
	
	while(testCases--) {
	    
	    cin >> x >> y;
	    
	    if(x > y) {
	        cout << 0;
	    } else {
	        cout << y/x << endl;
	    }
	   
	   
	}
	return 0;
}

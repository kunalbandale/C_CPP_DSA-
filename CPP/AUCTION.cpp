#include <iostream>
using namespace std;

int main() {
	// A | B | C 
	int a,b,c;
	int testCases;
	cin >> testCases;
	
	while(testCases--) {
	    cin >> a >> b >> c;
	    
	    if(a > b && a > c) {
	        cout << "Alice" << endl;
	    } else if(b > c && b > a) {
	        cout << "Bob" << endl;
	    } else {
	        cout << "Charlie" << endl;
	    }
	}
	return 0;
}

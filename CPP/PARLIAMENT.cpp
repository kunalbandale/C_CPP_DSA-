#include <iostream>
using namespace std;

int main() {
	int n,x;
	int y;
	int t;
	
	cin >> t;
	
	while(t--) {
	    cin >> n >> x;
	    
	    y = n - x ;
	    
	    if (x>= y) {
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	     
	    
	}
	return 0;
}

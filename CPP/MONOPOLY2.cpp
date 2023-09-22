#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int p,q,r,s;
    int t;
    
    cin >> t;
    
    while(t--) {
        cin >> p >> q >> r >> s;
        
        if(p > q+r+s) {
            cout << "YES" << endl;
        } else if(q > p+r+s) {
            cout << "YES" << endl;
        } else if(r > p+q+s) {
            cout << "YES" << endl;
        } else if(s > p+q+r) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    
    

	return 0;
}


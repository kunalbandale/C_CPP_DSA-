#include <iostream>
using namespace std;

int main() {
    int k , n, t;
    
    cin >> t;
    
    while(t--) {
        cin >> n >> k;
        
        if(n < k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
	return 0;
}

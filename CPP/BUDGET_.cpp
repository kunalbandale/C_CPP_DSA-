#include <iostream>
using namespace std;

int main() {
    int x , y, t;
    
    cin >> t;
    
    while(t--) {
        cin >> x >> y ;
    
        y = y*30;
        
        if(x >= y) {
            cout << "YES" << endl;
        }  else {
            cout << "NO" << endl;
        }
    }

	return 0;
}

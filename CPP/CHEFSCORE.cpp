#include <iostream>
using namespace std;

int main() {
    int n , x , t , y;
    
    cin >> t;
    
    while(t--) {
        cin >> n >> x >> y ;
        
        if(n*x == y) {
            cout << "YES" << endl;
        } else if ((n*x) != y && y % x == 0  ){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
	return 0;
}

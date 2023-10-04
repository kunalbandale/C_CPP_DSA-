#include <iostream>
using namespace std;

int main() {
    int t;
    int x,y;
    int count=0;
    int speed;
    
    cin >> t ;
    
    while(t--) {
        cin >> x >> y;
        cout << abs(y-x) << endl;
        
    }
	return 0;
}

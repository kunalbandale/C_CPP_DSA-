#include <iostream>
using namespace std;

int main() {
    int n , x , t;
    
    cin >> t;
    
    while(t--) {
        cin >> n >> x ;
        
        float total = n/6 ;
        if(n%6 == 0) {
               cout << total * x  << endl;
            
        } else {
            total++;
            cout << total * x  << endl;
        }
        
    }
	return 0;
}

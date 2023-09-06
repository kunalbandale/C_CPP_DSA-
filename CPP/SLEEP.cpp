#include <iostream>
using namespace std;

int main() {
    
    // less than 7hrs
    
    int t , x ;
    
     cin >> t;
     
     while(t--) {
         cin >> x ;
         
         if( x < 7) {
             cout << "YES" << endl;
         } else {
             cout << "NO" << endl;
         }
     }
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// K Weeks - 7 days 
	// X days
	int week;
	int days; 
    int t;
    
    cin >> t;
    
    while(t--) {
        cin >> week >> days;
        
        cout << (week * 7) - days << endl;
        
        
    }
	return 0;
}

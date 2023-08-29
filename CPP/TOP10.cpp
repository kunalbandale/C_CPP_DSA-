#include <iostream>
using namespace std;

int main() {
    
    int testCases , ChefRank;
    
    cin >> testCases;

    
    while(testCases--) {
        
        cin >> ChefRank;
        
        if(ChefRank <= 10) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
	
	
	
	
	return 0;
}

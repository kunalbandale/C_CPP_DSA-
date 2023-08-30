#include <iostream>
using namespace std;

int main() {
    int testCases;
    int check;
    int x;
    cin >> testCases;
    
    while(testCases--) {
        cin >> x;
        check = 4 * x;
        if(check <= 1000) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
	return 0;
}

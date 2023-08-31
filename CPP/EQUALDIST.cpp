#include <iostream>
using namespace std;

int main() {
    // A B 
    int testCases;
    int A , B;
    
    cin >> testCases;
    
    while(testCases--) {
        cin >> A >> B;
        int add = A+B;
        
        if(add % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
	return 0;
}

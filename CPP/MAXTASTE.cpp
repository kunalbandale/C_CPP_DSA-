#include <iostream>
using namespace std;

int main() {
    int A,B,C,D;
    int t;
    int a,b,c,d;
    
    cin >> t;
    
    while(t--) {
        cin >> A >> B >> C >> D;
        
        int taste1 = max(A,B);
        int taste2 = max(C,D);
        
        cout << taste1 + taste2 << endl;
    }
	return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int t,highest;
    int a,b,c;
    cin >> t;
    
    while(t--) {
        
        cin >> a >> b >> c;
        cout << std::max({a,b,c}) << endl;
    }
	
	
	return 0;
}

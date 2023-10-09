#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,t;
	int opp2 , opp1;
	
	cin >> t;
	
	while(t--) {
	    cin >> a >> b >> c >> d;
	    
	    
	    opp1 = a + c;
	    opp2 = b + d;
	    if(opp1 == 180 && opp2 == 180){
	        cout << "YES" << endl;
	    } else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

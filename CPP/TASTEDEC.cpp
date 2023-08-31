#include <iostream>
using namespace std;

int main() {
	// chocalte and candy 
	//  x - 2          y - 5
	int testCases;
	int x , y;
	
	cin >> testCases;
	
	while(testCases--){
	    cin >> x >> y;
	    int forChoco = x*2;
	    int forCandy = y*5;
	    
	    if(forChoco > forCandy) {
	        cout << "chocolate" << endl;
	    } else if(forChoco < forCandy){
	        cout << "candy" << endl;
	    } else {
	        cout << "either" << endl;
	    }
	}
	

	return 0;
}

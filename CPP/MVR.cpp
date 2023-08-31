#include <iostream>
using namespace std;

int main() {
	// each goal - 2pts
	// each assist - 1 2pts
	int A,B;
	int X,Y;
	
	cin >> A >> B >> X >> Y;
	int messi = A*2 + B;
	int ronaldo = X*2 + Y;
	
	if(messi > ronaldo) {
	    cout << "Messi";
	} else if(ronaldo > messi){
	    cout << "ronaldo";
	}else {
	    cout << "Equal" << endl;
	}
	return 0;
}

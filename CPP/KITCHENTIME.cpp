#include <iostream>
using namespace std;

int main() {
    
    int testCases;
    int workingHoursX , workingHoursY;
    
    cin >> testCases;
    
    while(testCases--) {
        cin >> workingHoursX >> workingHoursY;
        
        cout << workingHoursY - workingHoursX << endl;
    }
	
	
	
	return 0;
}

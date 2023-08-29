#include <iostream>
using namespace std;

int main() {
	
    int testCases;
    
    int	noOfDonations , target;
    
    cin >> testCases;
    
    while(testCases--) {
        cin >> noOfDonations >> target;
        cout << (noOfDonations - target)  << endl;
    }
    
	
	return 0;
}

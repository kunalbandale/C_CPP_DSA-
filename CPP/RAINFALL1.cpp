#include <iostream>
using namespace std;

int main() {
	// mm/hr 
// 	light - 3/hr
// moderate - 3/hr < 7
// heavy - <= 7

    int testCases;
    int rainGauge;
    
    cin >> testCases ;
    
    while(testCases--) {
        cin >> rainGauge;
        
        if(rainGauge < 3) 
            cout << "LIGHT" << endl;
        else if(rainGauge >= 3 && rainGauge < 7) 
            cout << "MODERATE" << endl;
        else 
            cout << "HEAVY" << endl;
    }
	return 0;
}

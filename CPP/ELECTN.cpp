#include <iostream>
using namespace std;

int main() {
    int testCases ,noOfPersons , minAge , ageOfPerson , count = 0 ; 
    
    cin >> testCases ;
    
    while(testCases--) {
        cin >> noOfPersons >> minAge ;
        count = 0; 
        
        for(int i = 0 ; i < noOfPersons ; i++) { 
            cin >> ageOfPerson;
            
            if(ageOfPerson >= minAge) {
                count++;
            }
        }
        
        cout << count << endl; 
    }
    
    return 0;
}

#include <iostream>
 using namespace std;
 
 int main() {
     
     int testCases;
     int totalNoPages , pagesRead , noOfDays;
     
     cin >> testCases ;
     
     while(testCases--) {
        cin >> totalNoPages >> pagesRead >> noOfDays ;
        
       int totalRead = pagesRead * noOfDays;
       
       if(totalRead == totalNoPages) {
           cout << "YES" << endl;
       } else if(totalRead < totalNoPages) {
           cout << "NO" << endl;
       } else {
           cout << "YES" << endl;
       }
       
       
       
     
     }
     return 0;
 }
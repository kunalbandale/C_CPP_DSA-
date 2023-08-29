#include <iostream>
 using namespace std;
 
 int main() {
     int testCases;
     int noOfStudents , noOfTickets;
     
     cin >> testCases;
     
     while(testCases--) {
         cin >> noOfStudents >> noOfTickets;
         
         if(noOfStudents < noOfTickets) {
             cout << 0 << endl;
         } else {
             cout <<  noOfStudents - noOfTickets << endl;
             
         }
      
     }
     
     
     
     return 0;
 }
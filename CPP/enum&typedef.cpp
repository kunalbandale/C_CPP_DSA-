#include<iostream>
 using namespace std;
 enum day {
 	mon,tue,wed,thu,fri,sat,sun
 };
 
 typedef int marks;
 typedef int roll;
 
 
 int main() {
 	day d;
 	d=mon;
// 	mon++ cannot use this. this are like const
 	cout << mon << endl;
 	cout << tue << endl;
 	
 	marks m1,m2,m3;
 	roll r1,r2,r3;
 	
	
 	return 0;
 }

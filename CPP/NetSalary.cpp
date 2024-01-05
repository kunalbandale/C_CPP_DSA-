// program to cal net sal
// input : basic salary , per of allowances , per of deducations
// net salary = basic salary + basic sal * per of all. * per of dec..

#include<iostream>
 using namespace std;
 
 int main() {
 	float salary , perOfAllowances , perOfDeducations;
 	float netSalary;
 	
 	cout << "Enter basic salary , per of allowances , per of deducations" << endl;
 	cin >>  salary >> perOfAllowances >> perOfDeducations;
 	
 	netSalary = salary+salary * (perOfAllowances/100) * (perOfDeducations/100);
 
 	return 0;
 }



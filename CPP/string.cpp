#include<iostream>
#include<string>
 using namespace std;
 

int main() {
	string str;
//	cin >> str;
	cout << "Enter a string";
	getline(cin,str);
	cout << str << endl;
	return 0;
}

#include<iostream>
#include<string>
 using namespace std;
 

int main() {
	string str = "Python lang.";
	cout << str.size() << endl;
	cout << str.length() << endl;
	cout << str.capacity() << endl;
	str.resize(50);
	cout << str.capacity() << endl;
	cout << str.max_size() << endl;
//	cout << str.clear() << endl;
	
	
	
	return 0;
}

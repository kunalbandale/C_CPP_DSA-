#include <iostream>
 using namespace std;
 
int maxim(int a , int b , int c) {
	if(a>b && a > c) 
		return a;
	else if (b>c)
		return b;
	else 
		return c;
}
 int main() {
 	
 	int r = maxim(10,20,43);
 	cout << r << endl;
 
 	return 0;
 }

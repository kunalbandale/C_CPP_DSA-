#include <iostream>
 using namespace std;
 
// call by address
// void swap(int *a , int *b) {
// 	int temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

//call by ref
void swap(int &a , int &b) {
 	int temp;
 	temp = a;
 	a = b;
 	b = temp;
 }
 
 int main() {
 	int x = 10 , y = 20;
 	swap(x,y);
 	cout << x << " " << y << endl;
 	return 0;
 }

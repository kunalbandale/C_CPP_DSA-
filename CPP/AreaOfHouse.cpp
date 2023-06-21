#include<iostream>
 using namespace std;

class House {
	
	public:
	int length = 0;
	int breadth = 0;
	
	public:
	void setData(int x , int y) {
		length = x;
		breadth = y;
	}
	void area() {
		cout  << "Area: " << length * breadth << endl; 
	}
};

int main() {
	House raj;
	raj.setData(200,300);
	raj.area();
	
	return 0;
}
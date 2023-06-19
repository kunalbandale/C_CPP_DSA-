#include<iostream>
 using namespace std;
 
class Student {
	public:
		int id;
		string name;
		
	public:
		void display() {
			cout << "id:\n " << id << "Name:\n " << name << endl;
			
		}
};

int main() {
	Student s1;
	s1.id = 1;
	s1.name = "ram";
	
	s1.display();
}
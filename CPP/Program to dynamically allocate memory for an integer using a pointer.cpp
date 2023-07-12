#include <iostream>
using namespace std;

int main() {
    int* numPtr = new int;
    *numPtr = 5;
    cout << "Value: " << *numPtr << endl;
    delete numPtr;
    return 0;
}

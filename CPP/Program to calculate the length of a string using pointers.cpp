#include <iostream>
using namespace std;

int calculateStringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const char* message = "Hello, World!";
    int length = calculateStringLength(message);
    cout << "Length of the string: " << length << endl;
    return 0;
}

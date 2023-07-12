#include <iostream>
using namespace std;

void reverseString(char* str) {
    char* start = str;
    char* end = str;
    while (*end) {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char message[] = "Hello, World!";
    cout << "Before reverse: " << message << endl;
    reverseString(message);
    cout << "After reverse: " << message << endl;
    return 0;
}

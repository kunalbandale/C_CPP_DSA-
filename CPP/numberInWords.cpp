#include <iostream>
using namespace std;

int main() {
    int n, r, rev = 0, m;

    cout << "Enter Any Number: ";
    cin >> n;
    m = n;

    while (n != 0) {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    cout << "Reversed Number: " << rev << endl;

    while (rev != 0) {
        r = rev % 10;
        rev = rev / 10;

        switch (r) {
            case 1:
                cout << "ONE" << endl;
                break;
            case 2:
                cout << "TWO" << endl;
                break;
            case 3:
                cout << "THREE" << endl;
                break;
            case 4:
                cout << "FOUR" << endl;
                break;
            case 5:
                cout << "FIVE" << endl;
                break;
            default:
                cout << "ZERO" << endl;
        }
    }

    return 0;
}


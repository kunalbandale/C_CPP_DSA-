#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int min_operations = min(x, n - x);

        cout << min_operations << endl;
    }

    return 0;
}

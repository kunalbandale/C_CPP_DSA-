#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, A, B;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y >> A >> B;
        int Medal = 0;

        if(X!=A && X!=B) Medal++;           // If Chef does not participate and Chef's arch-rival does(X).
        if(Y!=A && Y!=B) Medal++;           // Same condition for Chef's second game(Y).

        cout << Medal << endl;
    }
    return 0;
}
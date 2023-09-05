#include <iostream>
using namespace std;

int main() {
    int a , b ,c , t;
    int min,max;
    
    cin >> t;
    
    while(t--) {
        cin >> a >> b >> c ;
        
        if(a > b && a > c) {
            max = a;
        } else if(b > a && b > c) {
            max = b;
        } else {
            max = c;
        }
        
        if(a < b && a < c) {
             min = a;
        } else if(b < c && b < a){
             min = b;
        } else {
            min = c;
        }
        
        cout << max - min << endl;
    }
    
    
    
    
    return 0;
}
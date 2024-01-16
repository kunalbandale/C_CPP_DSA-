#include <iostream>
#include <climits>
 using namespace std;
 
 int main() {
 	
 	int a[10] = {2,4,6,8,10,12};
 	int max = INT_MIN;
 	
 	for(int x:a)
 		{
 			if(x>max)
 				max=x;
		 }
 		
 	cout << "Max Number is " << max << endl;
 	
 	return 0;
 }

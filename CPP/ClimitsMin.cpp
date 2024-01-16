#include <iostream>
#include <climits>
 using namespace std;
 
 int main() {
 	
 	int a[10] = {2,4,6,8,10,12};
 	int min = INT_MAX;
 	
 	for(int x:a)
 		{
 			if(x<min)
 				min=x;
		 }
 		
 	cout << "Max Number is " << min << endl;
 	
 	return 0;
 }

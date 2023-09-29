#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(max(a,b)==max(c,d))
	    {
	        cout<<"TIE"<<endl;
	    }
	    else if(max(a,b)<max(c,d))
	    {
	        cout<<"P"<<endl;
	    }
	    else
	    {
	        cout<<"Q"<<endl;
	    }
	}
	return 0;
}

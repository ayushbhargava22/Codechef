#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int c=0;
	    if(a[0] >= b[0])
	    {
	        c = 1;
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(a[i] - a[i-1] >= b[i])
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}

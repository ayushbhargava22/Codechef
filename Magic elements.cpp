#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	    long long int a[n];
	    long long int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum = sum +a[i];
	    }
	    long long int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]+k > sum - a[i])
	        {
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}   
	return 0;
}

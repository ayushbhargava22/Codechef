#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
  
        int res = 0; 
        for (int i=0; i<k; i++) 
        {
            res += a[i]; 
        }
        int curr_sum = res; 
        for (int i=k; i<n; i++) 
        { 
            curr_sum += a[i] - a[i-k]; 
            res = max(res, curr_sum); 
        }
        cout<<res<<endl;
  
	}
	return 0;
}

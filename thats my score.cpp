#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,sum=0;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	    }
	    for(int k=1;k<9;k++)
	    {
	        int z=0;
	       for(i=0;i<n;i++)
	       {
	           if(a[i]==k && z<=b[i])
	                z=b[i];
	       }
	       sum+=z;
	    }
	    cout<<sum<<endl;
	    
	    
	}
	return 0;
}

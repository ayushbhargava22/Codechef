#include <iostream>
#include <vector>
using namespace std;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string left;
	    string right;
	    int n = s.size();
	    for(int i=1;i<n;i++)
	    {
	        left.push_back(s[i]);
	    }
	    left.push_back(s[0]);
	    right.push_back(s[n-1]);
	    for(int i=0;i<=n-2;i++)
	    {
	        right.push_back(s[i]);
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(left[i] == right[i])
	        {
	            c++;
	        }
	    }
	    if(c == n)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n = s.length();
	    int sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] < 'a' || s[i] > 'z'){
	            sum += s[i] - '0';
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

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
	    int sa,sb;
	    cin>>sa>>sb;
	    int a,b;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] == 'A')
	        {
	            a=i;
	        }
	        if(s[i] == 'B')
	        {
	            b=i;
	        }
	    }
	    
	    while(b>a)
	    {
	        a=a+sa;
	        b=b-sb;
	    }
	    if(a==b)
	        cout<<"unsafe"<<endl;
	    else
	        cout<<"safe"<<endl;
	}
	return 0;
}

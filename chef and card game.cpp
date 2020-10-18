#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while(n!=0)
    {
        sum = sum + n%10;
        n=n/10;
    }
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int morty = 0,chef = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i]>>b[i];
	        if(a[i] > 9)
	        {
	            a[i] = sum(a[i]);
	        }
	        if(b[i] > 9)
	        {
	            b[i] = sum(b[i]);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i] == b[i])
	        {
	            morty++;
	            chef++;
	        }
	        else if(a[i] > b[i])
	        {
	            chef++;
	        }
	        else
	        {
	            morty++;
	        }
	    }
	    if(chef == morty)
	    {
	        cout<<"2 "<<chef<<endl;
	    }
	    else if(chef > morty)
	    {
	        cout<<"0 "<<chef<<endl;
	    }
	    else{
	        cout<<"1 "<<morty<<endl;
	    }
	}
	return 0;
}

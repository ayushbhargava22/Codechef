#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
 int n;
	cin>>n;
	int p;
	cin >>p;
	int a[p];
	for(int i=0;i<p;i++)
	{
	    cin>>a[i];
	}
	int q;
	cin>>q;
	int b[q];
	for(int i=0;i<q;i++)
	{
	    cin>>b[i];
	}
	
	int t;
	t=p+q;
	int merge[t];
	int k;
	for(int i=0; i<p; i++)
	{
		merge[i]=a[i];
	}
	for(int i=0, k=p; k<t && i<q; i++, k++)
	{
		merge[k]=b[i];
	}
    std::set<int> x;
    int counter=0;
    for(int i=0;i<t;i++)
    {
        x.insert(merge[i]);
    }
    counter=x.size();
    if(n==counter)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    
    return 0;
}
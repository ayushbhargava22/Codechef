#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    vector<long long int>v;
        long long int a,b,c;
        cin>>a>>b>>c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        if(v[0]+v[1]>v[2])
        {
         cout<<"YES"<<' ';
        long double s=(v[0]+v[1]+v[2])/2;
         long double ans=sqrt(s*(s-v[0])*(s-v[1])*(s-v[2]));
         cout<<fixed<<setprecision(5)<<ans<<'\n';
     }
     else
     cout<<"NO"<<'\n';
	}
	return 0;
}

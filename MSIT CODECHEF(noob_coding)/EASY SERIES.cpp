#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    int ans=(((((n%mod)*(n%mod))%mod)*(n%mod))%mod+(((n-1)%mod)*((n-1)%mod))%mod)%mod;
	    cout<<ans<<endl;
	    
	}
	return 0;
}

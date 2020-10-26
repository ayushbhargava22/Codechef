#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n1,n2,m;
	    cin>>n1>>n2>>m;
	    ll possible = (m * (m+1)) / 2; // all values are possible
		possible = min(possible, min(n1, n2));
		ll ans = n1+n2-2*possible;
		printf("%lld\n", ans);
	}
	return 0;
}

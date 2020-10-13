#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n,k,m;
	    cin>>n>>k>>m;
	    long long int p[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    int mx=0;
	    sort(p,p+n);
	    for(long long int i=0;i<n;i++)
	    {
	        if(p[i] * k <= m){
	            mx=p[i];
	        }
	    }
	    cout<<mx<<endl;
	}
	return 0;
}

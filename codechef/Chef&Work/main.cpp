#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll ar[n],count=0,sum=0,flag=0;
	    for(ll i=0;i<n;i++){
	    cin>>ar[i];
	    if(ar[i]>k){
	    flag=1;
	    }
	    }

	    for(ll i=0;i<n;i++){
	           if(sum+ar[i]<=k){
	           sum+=ar[i];
	          }
	      else{
	      count++;
	      sum=ar[i];
	      }
	    }
	    if(sum>0)
	    count++;
	    if(flag!=1)
	    cout<<count<<"\n";
	   else
	    cout<<-1<<"\n";

	}
	return 0;
}



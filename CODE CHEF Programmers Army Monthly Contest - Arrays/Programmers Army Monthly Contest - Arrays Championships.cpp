#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main(){
	IOS;
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		long temp=0,res=LONG_MIN;
		for(int i=0;i<k;i++){
			temp+=v[i];
		}
		res=max(res,temp);
		for(int i=k;i<n;i++){
			temp-=v[i-k];
			temp+=v[i];
			res=max(res,temp);
		}
		cout<<res<<"\n";
	}
	return 0;
}
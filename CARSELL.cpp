#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n,greater<int>());
	    long long int sum = 0;
	    for(int i=0;i<n;i++){
	        if(a[i] - i > 0){
	            sum+=a[i] - i;
	        }
	    }
	    cout<<sum%(1000000007)<<endl;
	}
	return 0;
}

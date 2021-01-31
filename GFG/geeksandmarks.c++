#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    
	    int cnt=0;
	    for(int i=0;i<n;i++) {
	        if(a[i] > x) {
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
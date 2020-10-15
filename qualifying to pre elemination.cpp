#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count = 0;
	    sort(a, a+n, greater<int>()); 
        int gre = a[k-1];
        for(int i=0;i<n;i++){
            if(a[i] >= gre)
            {
                count++;
            }
        }
        cout<<count<<endl;
	}   
	return 0;
}

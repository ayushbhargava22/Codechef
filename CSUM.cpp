#include <iostream>
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
	    int f=0;
	    for(int i=0;i<n;i++){
	       if(a[i]<k)
	       {
	            for(int j=i+1;j<n;j++){
	            if(a[i] + a[j] == k){
	               f++;
	               break;
	            }
	        }
	       }
	    }
	    
	    if(f>0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

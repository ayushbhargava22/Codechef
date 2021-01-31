#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    vector<int> arr;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        arr.push_back(a[i]);
	    }
	    sort(arr.begin(), arr.end(), greater<int>());
	    vector<int>::iterator ip; 
 
        ip = std::unique(arr.begin(), arr.end()); 
        arr.resize(std::distance(arr.begin(), ip)); 
	    if(arr.size()<k)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        for(int i=0;i<k;i++)
    	    {
    	        cout<<arr[i]<<" ";
    	    }
	        cout<<endl;
	    }
	}
	return 0;
}
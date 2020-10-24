#include <bits/stdc++.h> 
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	vector<int> arr;
	sort(a, a+n);
	int i;
	while(i<=n-k)
	{
	    int diff = abs(a[i]-a[i+k-1]);
	    arr.push_back(diff);
	    i++;
	}

    cout<<*min_element(arr.begin(), arr.end());
	return 0;
}

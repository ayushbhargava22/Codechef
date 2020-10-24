#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int m[n],s[n],e[n];
	int sum = 0;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
	    cin>>m[i]>>s[i]>>e[i];
	    sum = m[i]+s[i] + e[i];
	    arr.push_back(sum);
	}
	 sort(arr.begin(), arr.end());
	 int cnt=0;
	 if (arr[0] != arr[1]) 
	 {
        cnt++; 
	 }
    // Check for all the elements if it is different 
    // its adjacent elements 
    for (int i = 1; i < n - 1; i++) 
        if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1]) 
        {
            cnt++; 
        }
    // Check for the last element 
    if (arr[n - 2] != arr[n - 1]) 
    {
        cnt++; 
    }
    cout<<cnt<<endl;
	return 0;
}

#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	   int n,k;
	   cin>>n>>k;
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
	   
	    sort(a,a+n);
      long long int l=0,r=n-1;
       long long int  c=0;
       while(l<r){
           if(a[l]+a[r]==k)
           c++;
           if(a[l]+a[r]>k)
           r--;
           else
           l++;
           
       }
       cout<<c<<endl;
	}
	return 0;
}

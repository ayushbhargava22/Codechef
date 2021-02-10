#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
       int n;
       cin>>n;
       vector<int> arr;
       while(n>0)
       {
           int rem = n%2;
           arr.push_back(rem);
           n=n/2;
       }
       for(int i=arr.size()-1;i>=0;i--)
       {
           cout<<arr[i];
       }
   }
   return 0;
}
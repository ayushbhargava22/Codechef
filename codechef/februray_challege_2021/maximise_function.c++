#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++) {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       int ans = abs(arr[0]-arr[1]) + abs(arr[1]-arr[n-1]) + abs(arr[n-1]-arr[0]);
       cout<<ans<<endl;
   }
   return 0;
}
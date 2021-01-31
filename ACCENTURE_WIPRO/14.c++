#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   vector<int> arr;
   for(int i=0;i<n;i++)
   {
       int cnt=0;
       for(int j=0;j<n;j++)
       {
           if(a[i] == a[j])
           {
               cnt++;
           }
       }
       if(cnt == a[i])
       {
           arr.push_back(a[i]);
       }
   }
   sort(arr.begin(), arr.end(), greater<int>());
   cout<<arr[0];
   return 0;
}
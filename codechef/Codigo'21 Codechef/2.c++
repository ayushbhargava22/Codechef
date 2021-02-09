
//CHEF AND INVIGILATOR

#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       vector<int> arr;
       
       for(int j=1;j<=n;j++)
       {
           for(int i=0;i<n;i++)
           {
               if(a[i] == j)
               {
                   arr.push_back(i);
               }
           }
       }
       int sum = arr[0] - 0;
       for(int i=1;i<arr.size();i++)
       {
           sum = sum + abs(arr[i] - arr[i-1]);
       }
       cout<<sum<<endl;
   }
   return 0;
}
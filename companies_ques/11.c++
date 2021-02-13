#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
       int l,r;
       cin>>l>>r;
       vector<int> arr;
       
       for(int i=l;i<=r;i++)
       {
           int cnt=0;
           for(int j=1;j<=i;j++)
           {
               if(i%j==0)
               {
                   cnt++;
               }
           }
           if(cnt==2)
           {
               arr.push_back(i);
           }
       }
       
       int cnt=0;
       for(int i=0;i<arr.size();i++)
       {
           int m = 0;
           int temp = arr[i];
           while(temp > 0)
           {
               int rem = temp %10;
               m = m*10 + rem;
               temp = temp /10;
           }
           if(m == arr[i])
           {
               cnt++;
           }
       }
       cout<<cnt<<endl;
   }
   return 0;
}
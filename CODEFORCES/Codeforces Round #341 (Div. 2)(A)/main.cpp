#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

int main()
{
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a, a+n, greater<int>());
   ll even_cnt=0;
   ll odd_cnt=0;

   vector<int> odd;
   ll sum=0;

   for(ll i=0;i<n;i++)
   {
       if(a[i] % 2 == 0)
       {
           sum = sum + a[i];
       }
       else
       {
           odd.push_back(a[i]);
       }
   }

   if(odd.size() %2 == 0)
   {
        for(int i=0;i<odd.size();i++)
        {
            sum = sum + odd[i];
        }
   }
   else
   {
        for(int i=0;i<odd.size()-1;i++)
        {
            sum=sum+odd[i];
        }
   }

   cout<<sum<<endl;

   return 0;
}

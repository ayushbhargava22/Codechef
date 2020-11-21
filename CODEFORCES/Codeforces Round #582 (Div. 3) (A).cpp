#include <iostream>

using namespace std;

int main()
{
   long long int n;
   cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   long long int even =0 ;
   long long int odd = 0;
   for(int i=0;i<n;i++)
   {
       if(a[i]%2 == 0)
       {
           even++;
       }
       else
       {
           odd++;
       }
   }
   if(odd == n || even == n)
   {
       cout<<"0";
   }
   else
   {
       cout<<min(even, odd);
   }
   
   return 0;
}
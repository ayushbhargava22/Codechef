
//CHEF AND COLLEGE ADMISSION

#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int r;
       cin>>r;
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int index;
       for(int i=0;i<n;i++)
       {
           if(a[i]>=r)
           {
               index = i;
               break;
           }
       }
       cout<<index+1<<endl;
   }
   return 0;
}
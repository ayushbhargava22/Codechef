#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> arr;
   
   while(n>0)
   {
       int rem = n%10;
       arr.push_back(rem);
       n=n/10;
   }
   if(arr.size()%2==0)
   {
       for(int i=0;i<arr.size();i=i+2)
       {
           int tem = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = tem;
       }
   }
   else
   {
       for(int i=arr.size()-2;i>=0;i=i-2)
       {
           int rem = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = rem;
       }
   }
    for(int i=arr.size()-1;i>=0;i--)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
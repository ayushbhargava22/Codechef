#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   
   int i=0;
   while(n>0)
   {
       int rem = n%10;
       arr[i] = rem;
       i++;
       n=n/10;
   }
   int size = i;
   if(size%2==0)
   {
       for(int i=0;i<size;i=i+2)
       {
           int tem = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = tem;
       }
   }
   else
   {
       for(int i=size-2;i>=0;i=i-2)
       {
           int rem = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = rem;
       }
   }
    for(int i=size-1;i>=0;i--)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}
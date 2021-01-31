
//sum of largest digit in each number - sum of second largest in each number 

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
   int n1,n2,n3;
   cin>>n1>>n2>>n3;
   vector<int> arr1;
   vector<int> arr2;
   vector<int> arr3;
   
   while(n1>0)
   {
       int rem = n1%10;
       arr1.push_back(rem);
       n1=n1/10;
   }
   sort(arr1.begin(), arr1.end(),greater<int>());
   while(n2>0)
   {
       int rem = n2%10;
       arr2.push_back(rem);
       n2=n2/10;
   }
   sort(arr2.begin(), arr2.end(),greater<int>());
   while(n3>0)
   {
       int rem = n3%10;
       arr3.push_back(rem);
       n3=n3/10;
   }
   sort(arr3.begin(), arr3.end(),greater<int>());
   
   int ans = arr1[0] - arr1[1] + arr2[0] - arr2[1] + arr3[0] - arr3[1];
   cout<<ans;
   return 0;
}
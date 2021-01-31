//count od digit in a number exculding given digit
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int digit;
   cin>>digit;
   int cnt=0;
   while(n>0)
   {
       int rem = n%10;
       if(rem!=digit)
       {
           cnt++;
       }
       n=n/10;
   }
   cout<<cnt<<endl;
   return 0;
}
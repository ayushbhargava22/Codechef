#include <iostream>

using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 

int main()
{
   int n,m,z;
   cin>>n>>m>>z;
   int a,b;
   
   int res = lcm(n,m);
   a=res;
   int cnt=0;
   while(res<=z)
   {
       res=res+a;
       cnt++;
   }
   cout<<cnt;
   return 0;
}
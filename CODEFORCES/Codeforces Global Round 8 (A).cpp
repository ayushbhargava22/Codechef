#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        long long int cnt = 0;
        while(max(a,b) <= n)
        {
            if(a<b)
                a += b;
            else
                b += a;
                
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
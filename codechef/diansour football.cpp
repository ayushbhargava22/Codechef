#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl '\n'

int main()
{
    int t,n,k; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(int i=n-k;i<=n;i++)
            cout<<i<<" ";
        for(int i=1;i<n-k;i++)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
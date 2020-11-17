#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        
        sort(a, a+n);
        for(int i=n-2;i>=0;i--)
        {
            if(k) {
                a[n-1] += a[i];
                k--;
                a[i] = 0;
            }
            else {
                break;
            }
        }
        sort(a, a+n);
        long long int ans = a[n-1] - a[0];
        cout<<ans<<endl;
    }
    
    return 0;
}
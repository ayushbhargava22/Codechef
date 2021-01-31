#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int index = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k && a[i]!=0)
        {
            index = min(index, i);
        }
    }
    cout<<index;
    return 0;
}
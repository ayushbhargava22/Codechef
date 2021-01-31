#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    long long int b[n];
    long long int sum=0;

    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    sort(b, b+n,greater<int>());
    if(b[0] + b[1] >= sum)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
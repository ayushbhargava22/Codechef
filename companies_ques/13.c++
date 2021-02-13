#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + (i%num);
    }
    cout<<sum;
    return 0;
}
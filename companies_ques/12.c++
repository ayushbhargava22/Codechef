#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    
    int req_sum;
    cin>>req_sum;
    int maxi = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int cnt=1;
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            if(sum+a[j]<req_sum)
            {
                sum=sum+a[j];
                cnt++;
            }
            else
            {
                maxi = min(maxi,cnt);
                break;
            }
        }
    }
    cout<<maxi;
    return 0;
}
#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    if(a[0] !=0)
    {
        cout<<"NO"<<endl;
    }
    else if(b[0] == m && a[0] == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        int flag=1;
        int pos = b[0];
        int num1 = a[0];
        int num2 = b[0];
        for(int i=1;i<n;i++)
        {
            if(num2 < b[i] && a[i] <= num2)
            {
                pos = b[i];
                num2 = b[i];
                if(pos == m)
                {
                    cout<<"YES"<<endl;
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
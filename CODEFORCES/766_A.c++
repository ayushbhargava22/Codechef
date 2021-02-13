#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    
    int cnt=0;
    if(a==b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        if(a.size()>b.size())
        {
            cout<<a.size();
        }
        else
        {
            cout<<b.size();
        }
    }
    return 0;
}
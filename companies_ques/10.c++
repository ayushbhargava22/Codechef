#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==0) {
        int m = n/2;
        if(m%2==0)
        {
            cout<<s[n-1];
        }
        else {
            cout<<s[n-3];
        }
    }
    else if(n%2!=0) {
        cout<<s[n-2];
    }
    return 0;
}
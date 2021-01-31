#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    if(n<k){
        cout<<"NO"<<endl;
    }
    else {
        //int flag = -1;
        int p = n/k;
        if(p%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
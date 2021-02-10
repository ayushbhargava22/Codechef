#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int m,d;
    cin>>m>>d;
    if(m==2)
    {
        if(d==1)
        {
            cout<<4<<endl;
        }
        else
        {
            cout<<5<<endl;
        }
    }
    else if(d>=1 && d<=5 && m!=2)
    {
        cout<<5<<endl;
    }
    else if(d==6) {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) {
            cout<<6<<endl;
        }
        else {
            cout<<5<<endl;
        }
    }
    else if(d==7){
        cout<<6<<endl;
    }
    return 0;
}
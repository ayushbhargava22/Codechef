#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    
    int sumx=0;
    int sumy=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sumx=sumx+a[i];
        sumy=sumy+b[i];
    }
    int holdx=sumx;
    int holdy=sumy;
    int index=0;
    int real = abs(sumx-sumy);
    for(int i=0;i<n;i++)
    {
        sumx-=a[i];sumx+=b[i];
        sumy-=b[i];sumy+=a[i];
        
        int diff = abs(sumx-sumy);
        if(diff>real)
        {
            real=diff;
            index=i+1;
        }
        sumx=holdx;sumy=holdy;
    }
    cout<<index;
    return 0;
}
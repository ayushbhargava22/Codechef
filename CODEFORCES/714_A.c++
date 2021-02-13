#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    
    if(b < c || d < a)
        printf("0\n");
    else
    {
        long long int res = 0;
        if(a <= c && d <= b)
            res += d-c+1 - (c <= k && k <= d);
        else if(c <= a && b <= d)
            res += b-a+1 - (a <= k && k <= b);
        else if(a <= c && b <= d)
            res += b-c+1 - (c <= k && k <= b);
        else res += d-a+1 - (a <= k && k <= d);
        cout<<res;
    }
    return 0;
}
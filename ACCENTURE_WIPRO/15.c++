#include <iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i+j == n)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
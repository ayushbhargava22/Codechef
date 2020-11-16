#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int dis1 = abs(x1-x2) + abs(x1-x3);
    int dis2 = abs(x2-x1) + abs(x2-x3);
    int dis3 = abs(x3-x2) + abs(x1-x3);
    
    if(dis1 < dis2 && dis1 < dis3)
    {
        cout<<dis1<<endl;
    }
    else if(dis2 < dis1 && dis2 < dis3)
    {
        cout<<dis2<<endl;
    }
    else if(dis3 < dis2 && dis3 < dis1)
    {
        cout<<dis3<<endl;
    }
    
    return 0;
}
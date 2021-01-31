
//find the position of id 

#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int i=0;
    while(k>a[i])
    {
        i=i+1;
    }
    cout<<i;
    return 0;
}
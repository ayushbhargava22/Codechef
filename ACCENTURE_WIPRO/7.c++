
//find the fertility of day 1 or sum of alternate  numbers

#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i=i+2)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}
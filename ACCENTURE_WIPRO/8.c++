//find the kth largest element of a array 

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
    int k;
    cin>>k;
    sort(a, a+n);
    cout<<a[k-1]<<" "<<endl;
    return 0;
}
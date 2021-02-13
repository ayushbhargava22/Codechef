//amazon

#include <iostream>

using namespace std;

int maximum(int a[],int n)
{
    int max=-1;
    int index;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            index=i;
        }
    }
    return index;
}

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
    int cnt=0;
    int profit = 0;
    while(cnt!=k)
    {
        int num = maximum(a,n);
        profit = profit+a[num];
        a[num] = a[num]-1;
        cnt++;
    }
    cout<<profit;
    return 0;
}
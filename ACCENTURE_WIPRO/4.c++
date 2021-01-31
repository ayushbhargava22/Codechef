//arrange array in alternate even and odd in incresing order
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
    sort(a, a+n);
    vector<int> l1;
    vector<int> l2;
    
    for(int i=0;i<n;i++) {
        if(a[i]%2==0) {
            l1.push_back(a[i]);
        }
        else {
            l2.push_back(a[i]);
        }
    }
    
    int flag=-1;
    if(a[0] %2 == 0) {
        flag = 1;
    }
    
    int index = 0;
    int j=0,i=0;
    while(index < n)
    {
        if(flag ==1)
        {
            a[index++] = l1[i++];
            flag=0;
        }
        else
        {
            a[index++] = l2[j++];
            flag = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

//REPLULIC SUBARRAY

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxcnt=INT_MIN;
        int element;
        for(int i=0;i<n;i++)
        {
            int count=0;
            if(a[i] == 1)
            {
                element = 1;
                while(element == a[i])
                {
                    element++;
                    count++;
                    i++;
                }
            }
            maxcnt = max(maxcnt, count);
        }
        cout<<maxcnt<<endl;
    }
    return 0;
}
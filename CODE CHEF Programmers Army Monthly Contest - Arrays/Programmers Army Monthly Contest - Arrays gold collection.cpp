#include <iostream>
#include<vector>
#include<algorithm>

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
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        
        int q;
        cin>>q;
        while(q>0)
        {
            int q1,q2;
            cin>>q1>>q2;
            int sum =0;
            for(int i=q1;i<=q2;i++)
            {
                sum = sum + a[i];
            }
            cout<<sum<<endl;
            q--;
        }
    }
    
   return 0;
}
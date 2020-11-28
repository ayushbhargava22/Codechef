#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{
    long long int t;
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
         long long int count=0;
         int mini = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>mini)
            {
                count++;
            }
            mini = min(a[i], mini);
        }
        
        cout<<count<<endl;
    }
   
   return 0;
}
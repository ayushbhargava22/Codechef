#include<bits//stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i;
        char a[n],s[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int j=0;
        for(i=n-1;i>=0;i--)
        {
            s[j]=a[i];
            j++;
        }
        for(i=0;i<n;i++)
        {
            if(k==0)
            break;
            else
            {
                if(s[i]=='H')
                {
                    s[i]=0;
                    for(j=i+1;j<n;j++)
                    {
                        if(s[j]=='H')
                        s[j]='T';
                        else
                        {
                            s[j]='H';
                        }
                    }
                }
                else
                {
                    s[i]=0;
                }
                k--;
            }
        }
        int c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='H')
            c++;
        }
        cout<<c<<endl;
    }
}
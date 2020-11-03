#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        int fail = 0;
        int full = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum = sum+a[i];
        }
        int avg = sum /n;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 2)
            {
                fail++;
            }
            else if(a[i] == 5)
            {
                full++;
            }
        }
        if(avg>=4 && fail==0 && full>=1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	return 0;
}

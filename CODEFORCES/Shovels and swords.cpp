#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        long long int b;
        cin>>a>>b;
        
        long long int count=0;
        if(2*a < b)
        {
            cout<<a<<endl;
        }
        else if(2*b<a)
        {
            cout<<b<<endl;
        }
        else
        {
            cout<<(a+b)/3<<endl;
        }
    }
    return 0;
}
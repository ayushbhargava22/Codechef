#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath> 
#include <sstream> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        
       if(a==b)
       {
           cout<<"0"<<endl;
       }
       else if(a>b)
       {
           if(a%2 == b%2)
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
       }
       else
       {
           if(a%2 != b%2)
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
       }
    }
    
    return 0;
}
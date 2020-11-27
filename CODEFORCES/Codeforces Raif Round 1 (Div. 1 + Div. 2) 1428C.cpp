#include <iostream>
#include<stack>
using namespace std;

int solve()
{
    string s;
    cin>>s;
    stack<char> t;
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        if(t.size() == 0)
        {
            t.push(s[i]);
            continue;
        }
        if(s[i] == 'B' && (t.top() == 'A' || t.top() == 'B'))
        {
            t.pop();    
        }
        else
        {
            t.push(s[i]);
        }
    }
    
    cout<<t.size()<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      solve();
   }
   
   return 0;
}
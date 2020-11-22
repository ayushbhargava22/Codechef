#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string str;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            str.push_back(s[i]);
        }
        else
        {
            continue;
        }
    }
    cout<<str;
   
   return 0;
}
#include <iostream>
#include<vector>


using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }
    
    cout<<count<<endl;
    return 0;
}
#include <iostream>
#include<vector>


using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int freq[26] ={0};
    
    for(int i=0;i<len;i++)
    {
       freq[s[i] - 'a']++;
    }
    
    int count=0;
    for(int i=0;i<26;i++)
    {
       if(freq[i] != 0)
       {
           count++;
       }
    }
    
    if(count % 2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}
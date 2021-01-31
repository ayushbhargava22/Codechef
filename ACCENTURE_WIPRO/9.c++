
//uppercase to lowercase and vice versa

#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    //cout<<s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
			s[i]=s[i]+32;
		else if(s[i]>='a' && s[i]<='z')
			s[i]=s[i]-32;
		
    }
    cout<<s;
    return 0;
}
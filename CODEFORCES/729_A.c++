#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'o')
        {
            int cnt=0;
            while(i+2<n && s[i+1] =='g' && s[i+2] == 'o')
            {
                cnt++;
                i=i+2;
            }
            if(cnt) ans +="***" ;
            else ans.push_back(s[i]); 
        }
        else{
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
	return 0;
}
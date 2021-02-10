#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
       string s;
       cin>>s;
       string res;
       for(int i=0;i<s.size();i++) {
           if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]>=97 && s[i]<=122) {
               res += '*';
               res += s[i];
           }
           else if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]>=65 && s[i]<=90) {
               res += '*';
               res += s[i] + 32;
           }
       }
       cout<<res<<endl;
   }
   return 0;
}
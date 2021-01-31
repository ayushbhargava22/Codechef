//count consonents just after vowels
#include <iostream>

using namespace std;

int main()
{
   string s;
   cin>>s;
   
   int cnt=0;
   for(int i=0;i<s.size()-1;i++)
   {
       if(s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] =='o' || s[i] == 'u' || s[i] == 'U')
       {
          if(s[i+1] != 'a' || s[i+1] != 'A' || s[i+1] != 'E' || s[i+1] != 'e' || s[i+1] != 'i' || s[i+1] != 'I' || s[i+1] != 'O' || s[i+1] !='o' || s[i+1] != 'u' || s[i+1] != 'U')
          {
              cnt++;
              i=i+1;
          }
       }
   }
   cout<<cnt;
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  string s1;
  string s2;
  cin>>s1>>s2;
  int diff=0;
  int count = 0;
  if(n<=m)
  {
   	for(int i=0;i<n;i++)
    {
      if(s1[i] != s2[i])
         {
           count++;
         }
    }
        
  }
  	else if(m < n)
         {
         	for(int i=0;i<m;i++)
            {
            	if(s1[i] != s2[i])
                   {
                   	count++;
                   }   
            }
           
         }
         if(m>n)
         {
           diff = m-n;
         }
  	else if(n>m)
    {
      diff = n-m;
    }
  else
  {
    diff = n-m;
  }
  cout<<count+diff<<endl;
}
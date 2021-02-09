#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int ans,a,b,c,d;
	  ans=0;
	  cin>>a>>b>>c>>d;
	  for(int i=a;i<=b;i++)
	  {
	      if(i>d)
	      {
	          break;
	      }
	      if(i<c)
	      {
	          ans+=(d-c+1);
	      }
	      else
	      {
	          ans+=(d-i);
	      }
	  }
	  cout<<ans<<endl;
	}
	return 0;
}

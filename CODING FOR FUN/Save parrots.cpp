#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length();
	int sum=0;
	for(int i=0;i<l;i++)
	{
		int temp=92-s[i];
		sum+=temp;
	}
	cout<<sum;
	return 0;
}
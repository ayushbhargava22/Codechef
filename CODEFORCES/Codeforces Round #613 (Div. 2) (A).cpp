#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int left = 0;
    int right = 0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'L')
        {
            left = left-1;
        }
        else
        {
            right = right + 1;
        }
    }
    
    int count = 0;
    int i = left;
    while(i<=right)
    {
        count++;
        i++;
    }
    
    cout<<count;
    return 0;
}
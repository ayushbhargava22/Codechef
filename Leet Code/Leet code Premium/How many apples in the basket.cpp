#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int max = 5000;
    int count =0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i] <=5000)
        {
            sum = sum + a[i];
            count++;
        }
    }
    cout<<count;
   
   return 0;
}
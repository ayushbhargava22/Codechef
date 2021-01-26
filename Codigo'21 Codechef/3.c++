
//CHEF AND LIMBO

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    string x;
    string y;
    cin>>x;
    cin>>y;
    
    int x_cnt = 0,y_cnt=0,x_count=0,y_count=0;
    for(int i=0;i<x.size();i++)
    {
        if(x[i] == 'x')
            x_cnt++;
        else
            y_cnt++;
    }
    for(int i=0;i<y.size();i++)
    {
        if(y[i] == 'x')
            x_count++;
        else
            y_count++;
    }
    if(x_cnt < x_count || y_cnt < y_count)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
   return 0;
}
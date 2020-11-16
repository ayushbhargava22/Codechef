#include <bits/stdc++.h>
#include<algorithm>
 
using namespace std;
 
int main()
{
   
        int n,m;
        cin>>n>>m;
        int total = 0;
        int count = 0;
        
        
        total = total + n;
        for(int i=1;i<=n;i++)
        {
            if(i % m == 0)
            {
                count++;
            }
        }
        while(count > 0)
        {
            int new_n = n+1;
            n = n + count;
            total = total + count;
        
            count = 0;
        
            for(int i=new_n;i<=n;i++)
            {
                if(i % m == 0)
                {
                    count++;
                }
            }
            
        }
        cout<<total<<endl;
    
    return 0;
}
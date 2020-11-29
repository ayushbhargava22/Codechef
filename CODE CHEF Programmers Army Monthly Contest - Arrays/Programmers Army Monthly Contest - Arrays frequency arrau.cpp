#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
       int t;
       cin>>t;
       while(t--)
       {
           int n;
       cin>>n;
       int a[n];
       vector<int> arr;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           arr.push_back(a[i]);
       }
        int original = arr.size();
        sort(arr.begin(), arr.end());
        vector<int>::iterator ip; 
      
        
        ip = std::unique(arr.begin(), arr.begin() + original); 
     
    
        arr.resize(std::distance(arr.begin(), ip));
        
        int dup = arr.size();
    
        if(dup != original)
        {
            cout<<"ne krasivo"<<endl;
        }
        else
        {
            cout<<"prekrasnyy"<<endl;
        }
   }
   return 0;
}
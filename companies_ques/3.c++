#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
       int n;
       cin>>n;
       int m;
       cin>>m;
       int a[n][m];
       for(int i=0;i<n;i++) {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
       }
        int cnt=0;
        int l,r;
        cin>>l>>r;
       for(int i=0;i<n;i++) {
           int sum=0;
           for(int j=0;j<m;j++) {
               sum=sum+a[i][j];
           }
           if(sum>=l && sum <=r)
            cnt++;
       }
       for(int i=0;i<m;i++) {
           int sum=0;
           for(int j=0;j<n;j++) {
               sum = sum + a[j][i];
           }
           if(sum >=l && sum <= r)
            cnt++;
       }
       cout<<cnt;
   }
   return 0;
}
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    
    int row_sum = 0;
    int column_sum = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum = sum + a[i][j];
        }
        row_sum = max(row_sum,sum);
    }
    //cout<<row_sum;
    
    for(int i=0;i<m;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum = sum + a[j][i];
        }
        column_sum = max(column_sum,sum);
    }
    cout<<column_sum+row_sum;
    return 0;
}
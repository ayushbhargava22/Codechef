#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int total_lt = (k*l) / nl;
    
    int limes = c*d;
    int salt = p/np;
    
    vector<int> arr;
    arr.push_back(total_lt);
    arr.push_back(limes);
    arr.push_back(salt);
   
    sort(arr.begin(), arr.end());
    int ans = arr[0] / n;
    cout<<ans<<endl;
    return 0;
}
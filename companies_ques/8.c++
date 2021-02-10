#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    set<int> st;
    for(int i=0;i<k;i++)
    {
        st.insert(a[i]);
    }
    cout<<st.size();
    return 0;
}
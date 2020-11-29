#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("inputA.txt", "r", stdin);
    freopen("outputA.txt", "w", stdout);
#endif
}
 

int32_t main()
{
    c_p_c();
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	ll sum=0;
    	for (int i=0; i<n; i++) {
    		int take;
    		cin >> take;
    		sum+=take*1LL;
    	}
    	int q;
    	cin >> q;
    	for (int i=0; i<q; i++) {
    		int s, e, w;
    		cin >> s >> e >> w;
    		sum+=(e-s+1)*1LL*w;
    	}
    	cout << sum << endl;

    }
    return 0;
}
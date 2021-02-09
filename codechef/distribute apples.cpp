#include<iostream>
#include<vector>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        n = n/k;
        if(n%k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

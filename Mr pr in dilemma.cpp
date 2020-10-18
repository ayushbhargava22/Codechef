#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b){
            cout<<"YES\n";
        }
        else if(c==d){
            cout<<"NO\n";
        }
        else if(abs(a-b)%abs(c-d) == 0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	return 0;
}

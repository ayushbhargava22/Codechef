#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d;
char h;
int main(){
 ll t;
 cin>>t;
  while(t--){
    a=0;b=0;c=0;d=0;
     cin>>a>>b>>c>>d;
     for(ll i=0;i<b-1;i++){
        c=c+c*d;
        if(c>=a){break;}
     }
     if(c>=a){
        cout<<"ALIVE AND KICKING"<<endl;
     }
     else{
        cout<<"DEAD AND ROTTING"<<endl;
     }
  }
 }

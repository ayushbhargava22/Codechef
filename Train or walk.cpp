#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b,c,d,p,q,y,u=0,v=0,w=0;
        cin>>n>>a>>b>>c>>d>>p>>q>>y;
        int arr[n];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        u=abs(arr[a]-arr[b])*p;
        v=abs(arr[a]-arr[c])*p;
        if(v<=y){
            w=y+(abs(arr[d]-arr[c])*q)+(abs(arr[d]-arr[b])*p);
            if (w>u){
                cout<<u<<endl;
            }
            else{
                cout<<w<<endl;
            }
        }
        else if(v>y){
            cout<<u<<endl;
        }
    }
    return 0;
}
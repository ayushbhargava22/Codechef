#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string ar[4];
	    int flag = 0;
	    for(int i=0;i<3;i++){
	        cin>>ar[i];
	    }
	    for(int i=0;i<3;i++){
	        for(int j=0;j<3;j++){
	            if(ar[i][j] == 'l' && ar[i+1][j] == 'l' && ar[i+1][j+1]=='l'){
	                flag = 1;
	            }
	        }
	    }
	    if(flag==1){
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}

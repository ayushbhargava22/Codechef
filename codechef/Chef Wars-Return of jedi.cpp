#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int h,p;
	    cin>>h>>p;
	    while(h>0&&p>0){
	        h=h-p;
	        p=p/2;
	    }
	    if(h<=0){
	        cout<<"1\n";
	    }else{
	        cout<<"0\n";
	    }
	}
	return 0;
}

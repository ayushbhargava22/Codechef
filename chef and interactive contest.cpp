#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,r;
	cin>>n>>r;
	int rating[n];
	for(int i=0;i<n;i++){
	    cin>>rating[i];
	}
	char good[] = "Good boi";
	char bad[] = "Bad boi";
	for(int i=0;i<n;i++){
	    if(rating[i] < r){
	        cout<<bad<<endl;
	    }
	    else{
	        cout<<good<<endl;
	    }
	}
	return 0;
}

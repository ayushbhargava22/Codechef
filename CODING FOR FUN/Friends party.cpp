#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	string s;
	cin>>s;
	int Vcount=0;
	int Hcount=0;
	for(int i=0;i<n;i++){
	    if(s[i] == 'V'){
	        Vcount++;
	    }
	    else{
	        Hcount++;
	    }
	}
	if(Vcount > Hcount){
	    cout<<"Virat"<<endl;
	}
	else if(Hcount > Vcount)
	{
	    cout<<"Harshit"<<endl;
	}
	else
	{
	    cout<<"Friendship"<<endl;
	}
	return 0;
}

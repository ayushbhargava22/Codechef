#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int sum = 0;
	for(int i=1;i<=n;i++){
	    if(i%2 != 0){
	        sum = sum + (i*i);
	    }
	    else
	    {
	        sum = sum + (i*i*2);
	    }
	}
	if(sum %2 !=0){
	    cout<<"Jhon"<<endl;
	}
	else{
	    cout<<"Ravi"<<endl;
	}
	return 0;
}

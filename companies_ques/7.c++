#include <iostream>

using namespace std;


int main()
{
    string s;
    cin>>s;
    int sum=0;
    int maxi=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(') {
            sum += 1;
        }
        else {
            sum -=1;
        }
        
        if(sum == 0) {
            maxi = i+1;
        }
    }
    cout<<maxi;
    return 0;
}
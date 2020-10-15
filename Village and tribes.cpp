#include <iostream>
using namespace std;

void solve(string s){
    char last_symbol = 'X';
    int num_dots = 0;
    int answer_a = 0;
    int answer_b=0;
    for(char c:s){
        if(c == '.'){
            num_dots++;
        }
        else {
            if(c == 'A'){
                answer_a++;
            }
            else {
                answer_b++;
            }
            
            if(c == last_symbol){
                if(c == 'A'){
                    answer_a+=num_dots;
                }
                else {
                    answer_b+=num_dots;
                }
            }
            
            num_dots = 0;
            last_symbol = c;
        }
    }
    
    cout<<answer_a<<" "<<answer_b<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    solve(s);
	}
	return 0;
}

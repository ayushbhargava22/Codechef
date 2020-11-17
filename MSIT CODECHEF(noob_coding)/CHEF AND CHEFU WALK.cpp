#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    string s1,s2;
	    cin>>s1>>s2;
	   
	    int freq[26];
	    for(int i=0;i<26;i++){
		    freq[i]=0;
	    }
	    for(int i=0;i<s1.size()-1;i++){
		    freq[s1[i]-'a']++;
	    }
	    cout<<*max_element(freq,freq+26)<<" ";
	    if(s1[s1.size()-1] == 'n') cout<<"north"<<" ";
	    else if(s1[s1.size()-1] == 'e') cout<<"east"<<" ";
	    else if(s1[s1.size()-1] == 'w') cout<<"west"<<" ";
	    else if(s1[s1.size()-1] == 's') cout<<"south"<<" ";
	    
	    for(int i=0;i<26;i++){
		    freq[i]=0;
	    }
	    for(int i=0;i<s2.size()-1;i++){
		    freq[s2[i]-'a']++;
	    }
	    cout<<*max_element(freq,freq+26)<<" ";
	       if(s2[s2.size()-1]=='n') {cout<<"north"<<endl;}
        else if(s2[s2.size()-1]=='s') {cout<<"south"<<endl;}
	    else if(s2[s2.size()-1]=='e') {cout<<"east"<<endl;}
	    else {cout<<"west"<<endl;}
	    
	}
	return 0;
}

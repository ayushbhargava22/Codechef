#include <iostream>

using namespace std;

int sumOfDigits(int value) {
    int sum=0;
    while(value > 0)
    {
        int rem = value%10;
        sum=sum + rem;
        value=value/10;
    }
    return sum;
}

int main()
{
    int s;
    cin>>s;
    
    for(int i=10000;i<=99999;i++) {
        int res = sumOfDigits(i);
        if(res == s)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
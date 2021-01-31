//find last digit of n to power k
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int power = pow(n,k);
    long long int rem = power%10;
    cout<<rem;
    return 0;
}
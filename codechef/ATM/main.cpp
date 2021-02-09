#include <iostream>

using namespace std;

int main()
{
     float Y,charge=0.50, charges;
     int X;
    cin>>X;
    cin>>Y;
    charges=X+charge;
    if(charges<Y && X%5==0)
    {
        Y=Y-charges;
    }
    cout<<Y;
    return 0;
}

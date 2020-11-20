#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    vector<int> arr;
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    
    int dis1 = d1+d1+d2+d2;
    int dis2 = d1+d3+d2;
    int dis3 = d2+d2+d3+d3;
    int dis4 = d1+d3+d3+d1;
    
    arr.push_back(dis1);
    arr.push_back(dis2);
    arr.push_back(dis3);
    arr.push_back(dis4);
    
    sort(arr.begin(), arr.end());
    cout<<arr[0]<<endl;
    return 0;
}
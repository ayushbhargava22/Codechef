#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int m = num;
    vector<int> arr;
    vector<int> arr1;
    if(num<=5)
    {
        cout<<"0"<<endl;
    }
    else if(num>=6 && num <=9)
    {
        cout<<"10"<<endl;
    }
    else
    {
        while(num>0)
    {
        int rem = num%10;
        arr.push_back(rem);
        arr1.push_back(rem);
        num = num/10;
    }
    reverse(arr.begin(), arr.end());
    reverse(arr1.begin(), arr1.end());
    arr[arr.size()-1] = 0;
    arr1[arr1.size()-1] = 0;
    arr1[arr.size()-2] = arr[arr.size()-2]+1;
    reverse(arr.begin(), arr.end());
    reverse(arr1.begin(), arr1.end());
    int decimal = 1;
    int total = 0;
    for (auto& it : arr)
    {
        total += it * decimal;
        decimal *= 10;
    }
    int decimal1 = 1;
    int total1 = 0;
    for (auto& it : arr1)
    {
        total1 += it * decimal1;
        decimal1 *= 10;
    }
    if(abs(total1-m)<abs(total-m))
    {
        cout<<total1<<endl;
    }
    else
    {
        cout<<total<<endl;
    }
   }
   return 0;
}
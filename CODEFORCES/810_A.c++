#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    int A[N];
    scanf("%d %d",&N,&K);
 
    double sum = 0;
 
    for(int k = 0; k < N; k++){
        scanf("%d",&A[k]);
        sum += A[k];
    }
 
    int cnt = 0;
 
    while(1){
        double avg = sum/(double)N;
        if(avg + 0.5 >= K){
            break;
        }
        cnt++;
        sum += (double)K;
        N++;
    }
 
 
    printf("%d\n",cnt);
 
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001];


int main(){
    int N;
    cin>>N;
    
    dp[1]=1;
    
    for(int i=2;i<=N;i++){
        //1^2 * i, 즉 제곱수로 표현할 수 있는 최댓값으로 초기화
        dp[i]=i;
        for(int j=1;j*j<=i;j++){
            //+1 : 제곱수는 2^2, 3^2, ...
            dp[i]=min(dp[i],dp[i-j*j]+1);
        }
    }
    cout<<dp[N];
    return 0;
}
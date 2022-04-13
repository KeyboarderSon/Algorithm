#include <iostream>
using namespace std;


long long dp[90][2]={0, };

int main(){
    int num;
    cin>>num;
    
    dp[1][1]=1;
    
    for(int i=2;i<=num;i++){        
        dp[i][0]=dp[i-1][0]+dp[i-1][1];
        dp[i][1]=dp[i-1][0];
    }
    
    
    long long anw=dp[num][0]+dp[num][1];
    
    cout<<anw;
        

    return 0;
}

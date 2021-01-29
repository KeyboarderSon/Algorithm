#include <iostream>

using namespace std;

int D[201][201];

int main()
{
    
    int N,K;
    cin>>N>>K;
    
    for(int i=1;i<=N;i++){
        D[i][1]=1;
    }
    for(int i=1;i<=K;i++){
        D[1][i]=i;
    }
    for(int i=2;i<=N;i++){
        for(int j=1;j<=K;j++){
            D[i][j]=(D[i][j-1]+D[i-1][j])%1000000000;
        }
    }
    
    cout<<D[N][K];
    
    return 0;
}

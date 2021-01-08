#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long m[10001];
long long ans[10001];

void cal(int num){
    if(num==0) ans[0]=m[0];
    else if(num==1) ans[1]=m[0]+m[1];
    else if(num==2){
        long long max_value=max(max(m[0]+m[2],m[1]+m[2]),m[2]);
        ans[2]=max(max_value, m[0]+m[1]);  
    }
    else{
        ans[num]=max(ans[num-1], max(m[num]+ans[num-2], m[num]+m[num-1]+ans[num-3]));
    }
    if(num==n) return;
    cal(num+1);
}


int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>m[i];

    cal(0);
    
    cout<<ans[n-1];
    return 0;
}
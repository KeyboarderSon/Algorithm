#include <iostream>
#include <algorithm>
using namespace std;

int step[10001];
int ans[10001];

int main(){
    int num;
    cin>>num;
    
    for(int i=0;i<num;i++){
        cin>>step[i];
    }
    
    //initialize
    ans[0]=step[0];
    ans[1]=step[0]+step[1];
    ans[2]=step[2]+max(step[0], step[1]);
    
    
    for(int i=3;i<num;i++){
        ans[i]=max(ans[i-2]+step[i], ans[i-3]+step[i-1]+step[i]);
    }

    cout<<ans[num-1];
    
    return 0;
}
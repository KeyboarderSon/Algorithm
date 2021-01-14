#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[8];
int ans[8];

void Print(){
    for(int i=0;i<M-1;i++){
        if(ans[i]>ans[i+1]) return;
    }
    for(int i=0;i<M;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

void deep(int depth, int start){
    if(depth==M){
        Print();
        return;
    }
    int prev=0;
    
    for(int i=0; i<N; i++){
        if(arr[i]==prev) continue;
        ans[depth]=arr[i];
        deep(depth+1, start);
        prev=arr[i];
    }
        
        
    
}


int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+N);
    
    deep(0, 0);

    return 0;
}
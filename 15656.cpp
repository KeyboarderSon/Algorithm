#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[8];
int ans[8];


void Print(){
    for(int i=0;i<M;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

void deep(int depth){
    if(depth==M){
        Print();
        return;
    }
    else{
        for(int i=0; i<N; i++){
            ans[depth]=arr[i];
            deep(depth+1);
            
        }
        
        
    }
}


int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+N);
    
    deep(0);

    return 0;
}
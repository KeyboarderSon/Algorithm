#include <iostream>
using namespace std;

int N, M;
int arr[8];
int ans[8];
bool check[8]={false, };


void Print(){
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
    else{
        for(int i=0; i<N; i++){
            ans[depth]=arr[i];
            deep(depth+1, start+1);
        }
        
        
    }
}


int main(){
    cin>>N>>M;
    for(int i=0;i<N;i++){
        arr[i]=i+1;
    }
    deep(0,0);

    return 0;
}
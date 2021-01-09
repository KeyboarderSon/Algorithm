

#include <iostream>

using namespace std;

int num, M;
int arr[8];
int ans[8];
bool check[8]={false,};

void deep(int depth){
    if(depth==M){
        for(int i=0;i<M;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    else{
        for(int i=0;i<num;i++){
            if(!check[i]){
                check[i]=true;
                ans[depth]=arr[i];
                deep(depth+1);
                check[i]=false;
            }
        
        }
    }
}

int main()
{
    cin>>num>>M;
    
    for(int i=0;i<num;i++){
        arr[i]=i+1;
    }
    
    deep(0);

    return 0;
}

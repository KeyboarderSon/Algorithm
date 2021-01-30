#include <iostream>

using namespace std;

int test[11];

int D[1000000];

int solve(int num){
    if(num==1) return 1;
    if(num==2) return 2;
    if(num==3) return 4;
    if(D[num]!=0) return D[num];
    return D[num]=solve(num-1)+solve(num-2)+solve(num-3);
}

int main(){

    
    int testcase;
    
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        cin>>test[i];
    }
    
    
    for(int i=0;i<testcase;i++){
        if(i!=0) cout<<"\n";
        cout<<solve(test[i]);
        for(int j=0;j<test[i];j++){
            D[j]=0;
        }
        
    }

    
    return 0;
}
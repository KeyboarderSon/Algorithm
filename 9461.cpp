#include <iostream>
using namespace std;

int main(){
    long long P[101];

    int testcase;
    cin>>testcase;
    
    P[0]=1;
    P[1]=1;
    P[2]=1;
    P[3]=2;
    P[4]=2;
    
    int num;
    
    for(int i=0;i<testcase;i++){
        cin>>num;
        for(int j=5;j<num;j++){
            P[j]=P[j-5]+P[j-1];
        }
        cout<<P[num-1]<<"\n";
    }

    return 0;
}
#include<iostream>
using namespace std;

int D[1001];

int cal(int num){
    if (num==1) return 1;
    if (num==2) return 3;
    if (D[num]!=0) return D[num];
    else return D[num]=(cal(num-1)+2*cal(num-2))%10007;
}

int main()
{    
    int n;
    cin>>n;    
    cout<<cal(n);   
    return 0;
}

#include <iostream>
using namespace std;

int D[1001];

int cal(int number){
    if(number==1) return 1;
    if(number==2) return 2;
    if(D[number]!=0) return D[number];
    else return D[number]=(cal(number-1)+cal(number-2))%10007; 
}

int main()
{
    int n;
    cin>>n;
    cout<<cal(n);
    return 0;
}

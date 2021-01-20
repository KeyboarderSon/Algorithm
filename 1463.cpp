#include <iostream>

using namespace std;

int min(int a, int b) { return a>b?b:a;}

int main()
{
    int n;
    cin>>n;
    
    int num[1000000];
    num[0]=0;
    num[1]=0;
    for(int i=2;i<=n;i++){
        num[i]=num[i-1]+1;
        if(i%3==0) num[i]=min(num[i/3]+1,num[i]);
        if(i%2==0) num[i]=min(num[i/2]+1, num[i]);
        
    }
    cout<<num[n];
    
    return 0;
}

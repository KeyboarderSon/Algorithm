#include <iostream>

using namespace std;


int main()
{
    int arr[16];
    int n;
    cin>>n;
    if(n%2==1) {
        cout<<"0";
        return 0;   
    }
    
    arr[1]=3;
    arr[2]=11;
    
    for(int i=3;i<=n/2;i++){
        arr[i]=3*arr[i-1]+2;
        for(int j=i-2; j>0; j--){
            arr[i]+=2*arr[j];
        }
    }
    
    cout<<arr[n/2];
    
    
    return 0;
}

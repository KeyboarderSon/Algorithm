#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int rise[1001];
int fall[1001];
int num;
 
int main(){
    
    int cnt=0;
    cin>>num;
    
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    
    for(int i=0;i<num;i++){
        rise[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                rise[i]=max(rise[i], rise[j]+1);
            }            
            
        }
    }

    for(int i=num-1;i>=0;i--){
        fall[i]=1;
        for(int j=num-1;j>i;j--){
            if(arr[i]>arr[j]){
                fall[i]=max(fall[i], fall[j]+1);        
            }
        }
    }
    
    
    for(int i=0;i<num;i++){
        cnt=max(cnt, fall[i]+rise[i]-1);
    }
    
    
    cout<<cnt;
    
    return 0;
}
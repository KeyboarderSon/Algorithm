#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001];
int ans[1001];
int num;
 
int main(){
    int cnt=0;
    cin>>num;
    
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    
    
    for(int i=0;i<num;i++){
        ans[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                ans[i]=max(ans[i], ans[j]+1);
            }
        }
        cnt=max(cnt, ans[i]);
    }
    
    cout<<cnt;
    
    return 0;
}
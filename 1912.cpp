#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    int n;
    
    int arr[100001];
    int ans[100001];
    //ans[i]는 arr[i]값이 적어도 더해진 값이다.
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ans[0]=arr[0];
    
    int answer=ans[0];
    
    for(int i=1;i<n;i++){
        ans[i]=arr[i];
        
        /*
        이전에서 max되는 것만 골랐으니,
        1. 이전과 계속적으로 덧붙여질지(연속),
        2. 아닐지(불연속->단독arr[i])
        */
        ans[i]=max(ans[i], ans[i-1]+arr[i]);
        answer=max(answer, ans[i]);
    }
    
    cout<<answer;
    
    return 0;
}
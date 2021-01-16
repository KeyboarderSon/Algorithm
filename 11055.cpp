#include <iostream>
#include <algorithm> 
using namespace std;
 
int main()
{
 
    int n;
    int ans[1000] = {};
    int arr[1000] = {};
    int sum = 0;
 
    cin >> n;
 
    for(int i=0;i<n;i++)
        cin>>arr[i];

    
    for(int i=0;i<n;i++){
        ans[i]=arr[i];
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                //지금까지가 나은지, 아님 업데이트할 지
                ans[i] = max(ans[i], ans[j] + arr[i]);
                
            }
        }
        sum=max(sum, ans[i]);
    }
    cout<<sum;

}

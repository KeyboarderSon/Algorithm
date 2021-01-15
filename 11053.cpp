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
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];


    for (int i = 0; i < n; i++){
        //최소 1은 가짐
        ans[i] = 1;

        // ans[i] 찾기
        for (int j = 0; j < i; j++){
            //제일 끝자리 타겟 값보다 이전에 도는 비교값 j가 작다면
            if (arr[i] > arr[j])
                //ans[i] 업데이트
                ans[i] = max(ans[i], ans[j] + 1);
        }
        sum = max(sum, ans[i]);
    }
    cout << sum;
}

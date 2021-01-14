#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
int arr[9];
vector<int> v;

void dfs(int depth){
    if(v.size() == m){
        for(int i = 0; i < m; i++)
            cout << v[i] << " ";
        cout << "\n";
        return;
    }
    int prev = 0;
    for(int i = depth; i < n; i++){
        if(prev == arr[i])
            continue;
        
        v.push_back(arr[i]);
        dfs(i+1);
        prev = arr[i];
        v.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    dfs(0);
    return 0;
}

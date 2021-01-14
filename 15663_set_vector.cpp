#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>

using namespace std;

int num, M;
int arr[8];
vector<int>V;
set<string>Visit;
bool check[8]={false,};


bool Duplicate()
{
    string str = "";
    for (int i = 0; i < V.size(); i++){
        char A = V[i] + '0';
        str = str + A;
    }
 
    if (Visit.find(str) == Visit.end()){
        Visit.insert(str);
        return false;
    }
    else return true;
}




void deep(int depth){
    if(depth==M){
        if(!Duplicate()){
            for(int i=0;i<V.size();i++){
                cout<<V[i]<<" ";
            }
            cout<<"\n";
            
        }
        return;
    }
    else{
        for(int i=0;i<num;i++){
            if(!check[i]){
                check[i]=true;
                V.push_back(arr[i]);
                deep(depth+1);
                check[i]=false;
                V.pop_back();
            }
        
        }
    }
}

int main()
{
    cin>>num>>M;
    int n;
    int idx=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    sort(arr, arr+num);
    deep(0);

    return 0;
}

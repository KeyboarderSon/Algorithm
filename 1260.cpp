#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int map[1001][1001], visited_dfs[1001], visited_bfs[1001];
int queue[1001];

void dfs(int i, int n){
    visited_dfs[i]=1;
    cout<<i<<" ";
    for(int j=1; j<=n; j++){
        if(map[i][j] && !visited_dfs[j]){
            dfs(j, n);
        }
    }
    
}

// bfs는 재귀 없이
// queue 사용하지 않고 배열로만 사용
void bfs(int i, int n){
    int front=0, rear=0;
    int pop;
    
    cout<<i<<" ";
    visited_bfs[i]=1;
    queue[rear++]=i;
    // rear가 front보다 1 앞선 상태에서 시작
    
    while(front<rear){
        // queue의 맨 앞을 빼는 것이 pop(당연한 소리)
        // queue에서 pop하기 전에 이미 출력 이력이 있는 노드임을 기억하삼
        pop = queue[front++];
        
        // 모든 노드에 대하여
        for(int j=1; j<=n; j++){
            //간선 연결되어있고 노드 방문한 적이 없다면
            if(map[pop][j] && !visited_bfs[j]){
                //곧장 바로 출력
                cout<<j<<" ";
                queue[rear++]=j;
                visited_bfs[j]=1;
            }
        }
    }
    
    return;
}


/*
 *
 * Queue 사용해서 bfs
 *
 **/
void bfs_q(int cur, int N){
    queue<int>q;
    q.push(cur);
    b_visited[cur]=1;
    while(!q.empty()){
        cur = q.front();
        q.pop();
        printf("%d ", cur);
        for(int i=1; i<=N; i++){
            if(!b_visited[i] && map[cur][i]){
                q.push(i);
                b_visited[i]=1;
            }
        }
        
    }
}







int main()
{
    int n, m, start;
    cin>>n>>m>>start;
    int a, b;
    for (int i=0; i<m; i++){
        cin>>a>>b;
        map[a][b]=1;
        map[b][a]=1;
    }
    dfs(start, n);
    cout<<"\n";
    bfs(start, n);
    
    return 0;
}

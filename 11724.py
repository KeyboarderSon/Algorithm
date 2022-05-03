import sys
sys.setrecursionlimit(10**6)

N, M = map(int, sys.stdin.readline().split())


edge = [[0] * (N+1) for i in range(N+1)]
visited=[0] * (N+1)
stack = []
connected=0


def deep(N, i):
    visited[i]=1
    for e in range(N+1):
        if (not visited[e]) and edge[i][e]:
            stack.append(e)
            deep(N, e)


for _ in range(M):
    u, v = map(int, sys.stdin.readline().split())
    edge[u][v]=1
    edge[v][u]=1

for node in range(1, N+1):
    if not visited[node]:
        deep(N, node)
        connected += 1

print(connected)
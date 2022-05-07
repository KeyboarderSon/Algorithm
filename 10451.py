import sys

sys.setrecursionlimit(2000)
input = sys.stdin.readline
T = int(input())

def find_cycle(i):
    if not visited[i]:
        visited[i]=1
        find_cycle(l[i])

for _ in range(T):
    N = int(input())
    l = [0] + list(map(int, input().split()))
    visited = [0] * (N+1)
    cycle = 0

    for i in range(1, N+1):
        if not visited[i]:
            find_cycle(i)
            cycle += 1

    print(cycle)

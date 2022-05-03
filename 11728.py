import sys

input = sys.stdin.readline

N, M = map(int, input().split())

l=[]

n=list(map(int, input().split()))
m=list(map(int, input().split()))


i, j = 0, 0

while i < N and j < M:
    #print(i, j, N, M)
    if n[i]<m[j]:
        l.append(n[i])
        i+=1
    else:
        l.append(m[j])
        j+=1

if i == N:
    for _j in range(j, M):
        l.append(m[_j])

else:
    for _i in range(i, N):
        l.append(n[_i])


print(" ".join(map(str, l)))
import sys

n, k = map(int, sys.stdin.readline().split())

l = [i for i in range(1, n+1)]
ans = []
idx = 0

while len(l):
    idx = (idx + k-1) % len(l)
    ans.append(l.pop(idx))

print("<"+ str(ans)[1:-1]+">")
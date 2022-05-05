import sys

input = sys.stdin.readline
sum = 0

N, K = map(int, input().split())
l = [int(input()) for _ in range(N)]

for i in range(N-1, -1, -1):
    if K<l[i]:
        continue
    if K==0:
        break
    sum += K // l[i]
    K %= l[i]

print(sum)
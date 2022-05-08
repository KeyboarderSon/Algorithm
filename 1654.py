import sys

input = sys.stdin.readline

k, n = map(int, input().split())
klist = [int(input()) for _ in range(k)]
min_o, max_o = 1, max(klist)

while min_o <= max_o:
    mid = (min_o + max_o) // 2
    _n = 0
    for i in klist:
        _n += i // mid

    if _n >= n:
        min_o = mid + 1
    else:
        max_o = mid - 1  

print(max_o)
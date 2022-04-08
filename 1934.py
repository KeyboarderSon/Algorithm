import sys
n=int(sys.stdin.readline())

for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    minval = min(a, b)
    maxval = max(a, b)
    if maxval % minval == 0:
        print(maxval)
        continue

    m=1
    for i in range(2, minval//2 + 1):
        if a%i==0 and b%i==0:
            m = i
    print(a * b // m)

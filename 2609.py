import sys

a, b = map(int, sys.stdin.readline().split())

lower, bigger = min(a, b), max(a, b)

if bigger % lower == 0:
    print(lower)
    print(bigger)
else:
    for i in range(1, lower // 2 + 1):
        if a%i==0 and b%i==0:
            ans1=i

    print(ans1)
    print(a//ans1 * b)
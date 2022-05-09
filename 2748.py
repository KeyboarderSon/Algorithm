import sys

n = int(sys.stdin.readline())
l = [0, 1] + [-1] * (n-1)

def fibo(n):
    if l[n] != -1:
        return l[n]
    l[n] = fibo(n-1)+fibo(n-2)
    return l[n]

print(fibo(n))
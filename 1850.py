import sys

def gcd(a, b):
    if b == 0:
        return a
    a = a%b
    return gcd(b, a)
# while b: a, b = b, a%b

a, b = map(int, sys.stdin.readline().split())

print('1'*gcd(a, b))
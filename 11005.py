# tmp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"를 넣어 
# tmp[n % b]의 방법이 더 낫다

import sys

n, b = map(int, sys.stdin.readline().split())
l = []
while n>=b:
    s = n%b
    n = n//b
    if s>=10:
        s=chr(ord('A')+s-10)
    l.append(str(s))


if n>=10:
    n=chr(ord('A')+n-10)

l.append(str(n))

print("".join(l[::-1]))
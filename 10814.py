import sys

num = int(sys.stdin.readline())
l = [sys.stdin.readline() for i in range(num)]
l.sort(key = lambda x:int(x.split()[0]))
print(''.join(l))
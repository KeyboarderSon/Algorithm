import sys
num = int(sys.stdin.readline())

l = [sys.stdin.readline() for _ in range(num)]
l.sort(key = lambda dot : (int((dot.split()[1])), int(dot.split()[0])))
print(''.join(l))
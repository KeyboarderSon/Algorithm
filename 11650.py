### my solution
num = int(input())

class Dot:
    def __init__(self, x, y):
        self.x = x
        self.y = y

dots = []

for _ in range(num):
    x, y = input().split()
    x, y = int(x), int(y)
    dot = Dot(x, y)
    dots.append(dot)

dots.sort(key = lambda a : (a.x, a.y))

for i in range(num):
    print(dots[i].x, dots[i].y)

### modify my solution
import sys

n = int(sys.stdin.readline())
lst = [sys.stdin.readline() for _ in range(n)]
lst.sort(key=lambda dot: (int(dot.split()[0]), int(dot.split()[1])))
print(''.join(lst))


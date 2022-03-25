import sys
input = sys.stdin.readline

n = int(input())

queue = []

for i in range(n):
    do = input().split()
    if do[0] == "push":
        queue.insert(0, do[1])
    elif do[0] == "pop":
        if len(queue):
            print(queue.pop())
        else:
            print(-1)

    elif do[0] == "size":
        print(len(queue))
    elif do[0] == "empty":
        if len(queue):
            print(0)
        else:
            print(1)
    elif do[0] == "front":
        if len(queue):
            print(queue[len(queue)-1])
        else:
            print(-1)

    elif do[0] == "back":
        if len(queue):
            print(queue[0])
        else:
            print(-1)

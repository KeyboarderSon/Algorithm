import sys
input = sys.stdin.readline

n = int(input())
deque = []

for i in range(n):
    do = input().split()
    if do[0] == "push_front":
        deque.insert(0, do[1])
    elif do[0] == "push_back":
        deque.append(do[1])
    elif do[0] == "pop_front":
        if len(deque):
            print(deque.pop(0))
        else:
            print(-1)
    elif do[0] == "pop_back":
        if len(deque):
            print(deque.pop())
        else:
            print(-1)
    elif do[0] == "size":
        print(len(deque))
    elif do[0] == "empty":
        if len(deque):
            print(0)
        else:
            print(1)
    elif do[0] == "front":
        if len(deque):
            print(deque[0])
        else:
            print(-1)
    elif do[0] == "back":
        if len(deque):
            print(deque[len(deque)-1])
        else:
            print(-1)

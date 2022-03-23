import sys
input = sys.stdin.readline

num = int(input())
stack=[]
for _ in range(num):
    do = input().split()

    if do[0]=="push":
        stack.append(do[1])
    elif do[0]=="pop":
        if stack:
            print(stack.pop())
        else:
            print(-1)
    elif do[0]=="top":
        if stack:
            print(stack[len(stack)-1])
        else:
            print("-1")
    elif do[0]=="size":
        print(len(stack))
    elif do[0]=="empty":
        if stack:
            print(0)
        else:
            print(1)

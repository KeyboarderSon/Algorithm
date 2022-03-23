import sys
input = sys.stdin.readline

num = int(input())

for i in range(num):
    left = 0
    right = 0
    ps = input()
    for j in ps:
        if j == "(":
            left += 1
        elif j == ")":
            right += 1
        if left<right:
            break

    if left==right:
        print("YES")
    else:
        print("NO")
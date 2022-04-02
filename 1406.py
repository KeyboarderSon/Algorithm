## 
# insert 사용의 경우 시간 초과
# insert : O(n)
# append, pop : O(1)
# 이 점을 이용하여 cursor 기준으로 left, right 나눔
# right는 0번째 인덱스에 추가해야 하는데 이를 append로 하고 print시 right은 거꾸로 출력해야겠다.

import sys
input = sys.stdin.readline

left = list(input().rstrip())
right = []
n = int(input())

idx = len(left)

for i in range(n):
    cmd = input().split()
    if cmd[0]=="L":
        if left:
            right.append(left.pop())
    elif cmd[0]=="D":
        if right:
            left.append(right.pop())
    elif cmd[0]=="B":
        if left:
            left.pop()
    elif cmd[0]=="P":
        left.append(cmd[1])
        
print("".join(left), end = "")
print("".join(list(right[::-1])))

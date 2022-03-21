import sys
num = int(sys.stdin.readline())
l = [0]*10001

# index에 카드 번호, 이에 따른 카드 개수 저장
for i in range(num):
    tmp = int(sys.stdin.readline())
    l[tmp]+=1

for i in range(len(l)):
    if l[i]!= 0:
        for j in range(l[i]):
            print(i)

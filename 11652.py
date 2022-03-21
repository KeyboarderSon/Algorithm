import sys
num = int(sys.stdin.readline())
dic = {}

for i in range(num):
    card = int(sys.stdin.readline())
    if card in dic:
        dic[card] += 1
    else:
        dic[card] = 1

# 개수에 대하여 내림차순, 같은 개수에 대하여 카드 오름차순
dic = sorted(dic.items(), key=lambda x: (-x[1], x[0]))
print(dic[0][0])
import sys
input = sys.stdin.readline

word=list(input())

count=[0]*26

for a in word[:-1]:
    idx = ord(a)-ord('a')
    count[idx] += 1

# int형 문자열로 바꿔 띄어쓰기 단위 출력
print(" ".join(map(str, count)))
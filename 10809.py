import sys
input = sys.stdin.readline

word = list(input())

cnt = [-1] * 26

for i, a in enumerate(word[:-1]):
    idx = ord(a)-ord('a')
    if cnt[idx] != -1:
        continue
    cnt[idx] = i

print(" ".join(map(str, cnt)))
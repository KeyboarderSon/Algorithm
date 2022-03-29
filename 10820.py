#소문자, 대문자, 숫자, 공백
import sys
input = sys.stdin.readline



for i in range(100):
    cnt = [0] * 4
    st = list(input())
    if not st:
        break
    for j in st[:-1]:
        if j == " ": #j.isspace()
            cnt[3] += 1
        elif ord('a')<=ord(j) and ord(j)<=ord('z'): #j.islower()
            cnt[0] += 1 
        elif ord('A')<=ord(j) and ord(j)<=ord('z'): #j.isupper()
            cnt[1] += 1
        else: # j.isdigit()
            cnt[2] += 1

    print(" ".join(map(str, cnt)))

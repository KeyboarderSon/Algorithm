import sys

# strip으로 하면 " n" case에서 앞 공백이 출력되지 않음
l=list(sys.stdin.readline().rstrip())

for i in l:
    if ord('A')<=ord(i) and ord(i)<=ord('Z'):
        print(chr((ord(i)+13-ord('A'))% 26 + ord('A')), end='')
    elif ord('a')<=ord(i) and ord(i)<=ord('z'):
        print(chr((ord(i)+13-ord('a'))% 26 + ord('a')), end='')
    else:
        print(i, end='')

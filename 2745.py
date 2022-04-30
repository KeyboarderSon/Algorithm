import sys

tmp = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

N, B = sys.stdin.readline().split()

B = int(B)
size = len(N)-1
sum=0

for i in range(len(N)):
    sum+=pow(B, i)*tmp.index((N[size-i]))
    
print(sum)
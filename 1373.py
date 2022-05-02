import sys
n = sys.stdin.readline().rstrip()
eight=""

for i in range(len(n), 0, -3):
    if i==1:
        eight += str(int(n[i-1]))
    elif i==2:
        eight += str(int(n[i-2])*2**1+int(n[i-1]))
    else:  
        eight += str(int(n[i-3])*2**2+int(n[i-2])*2**1+int(n[i-1]))


print("".join(eight[::-1]))


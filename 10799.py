import sys
input = sys.stdin.readline

stick = input()

total = 0
left=[]
for i in range(len(stick)):
    if stick[i] == "(":
        left.append(stick[i])
        
    elif stick[i] == ")":
        if stick[i-1] == "(":
            left.pop()
            total += len(left)
        else:
            left.pop()
            total += 1
            
print(total)
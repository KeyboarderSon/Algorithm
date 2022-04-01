import sys
word = sys.stdin.readline().rstrip()

l=[]

for i in range(1, len(word)+1):
    l.append(word[len(word)-i:])
    
l.sort()

print("\n".join(l))
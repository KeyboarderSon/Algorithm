a,b = map(int,input().split())
A = list(map(int, input().split()))
score = [str(x) for x in A if x<b]
print(' '.join(score))

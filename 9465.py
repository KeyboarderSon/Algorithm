import sys
input = sys.stdin.readline

for t in range(int(input())):
    n = int(input())
    D = [[0] * n, [0] * n]
    nlist = [list(map(int, input().split())) for _ in range(2)]

    if n==1:
        print(max(nlist[0][0], nlist[1][0]))
    else:
        D[0][0] = nlist[0][0]
        D[1][0] = nlist[1][0]



        D[0][1] = D[1][0] + nlist[0][1]
        D[1][1] = D[0][0] + nlist[1][1]


        for i in range(2, n):
            D[0][i] = max(D[1][i-1] + nlist[0][i], D[1][i-2] + nlist[0][i])
            D[1][i] = max(D[0][i-1] + nlist[1][i], D[0][i-2] + nlist[1][i])
        print(max(D[0][n-1], D[1][n-1]))
    
    
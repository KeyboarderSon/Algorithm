def merge(h, m, U, V, S):
    i=0
    j=0
    while i<h and j<m:
        if U[i]<V[j]:
            S[k]=U[i]
            i+=1
        else:
            S[k]=V[j]
            j+=1
    if i!=h:
        while i<h:
            S[k]=U[i]
            i+=1
    else :
        while j<m:
            S[k]=V[j]
            j+=1



#h, m은 두 배열로 나뉘는 U, V의 각 길이
def mergesort(n, S):
    global HaveUsed1
    
    if n>1:
        h=n//2
        m=n-h
        U=S[:h]#mid전까지
        V=S[h:]#mid부터
        mergesort(h, U)
        mergesort(m, V)
        merge(h, m, U, V, S)
        



def merge2(low, mid, high):
    global HaveUsed2
    i=low
    j=mid+1
    tmp=[]
    while i<=mid and j<=high:
        if s[i]<s[j]:
            tmp.append(s[i])
            i+=1
        else:
            tmp.append(s[j])
            j+=1
    if i<=mid:
        while i<=mid:
            tmp.append(s[i])
            i+=1
    else:    
        while j<=high:
            tmp.append(s[j])
            j+=1
    l2=len(tmp)
    for item in tmp:
        s[low]=item
        low+=1
        

def mergesort2(low, high):
    mid=(low+high)//2
    if(low<high):

        mergesort2(low, mid)
        mergesort2(mid+1, high)
        merge2(low, mid, high)




s1=[3,16,13,1 ,9,2,7,5, 8,4,11,6, 15,14,10,12]
mergesort(len(s1), s1)
print(s1)

s=[3,16,13,1 ,9,2,7,5, 8,4,11,6, 15,14,10,12]
mergesort2(0, len(s)-1)
print(s)
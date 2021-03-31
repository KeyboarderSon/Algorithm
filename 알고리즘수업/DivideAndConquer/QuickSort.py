def partition(s, low, high):
    j=low
    pivot=s[low]
    for i in range(low+1, high+1):
        if s[i]<pivot:
            j+=1
            (s[i], s[j]) = (s[j], s[i])
    
    (s[j], s[low]) = (s[low], s[j])
    return j

def quickSort(s, low, high):
    if low<high:
        pivot=partition(s, low, high)
        quickSort(s, low, pivot-1)
        quickSort(s, pivot+1, high)

s=[3,5,2,9,10,14,4,8]
quickSort(s, 0, len(s)-1)
print(s)


def prod2(a,b):
    Asize=len(str(a))
    Bsize=len(str(b))
    n=max(Asize, Bsize)
    if a==0 or b==0:
        return 0
    if n<=threshold:
        return a*b
    else:
        m=n//2
        x=a//pow(10, m)
        y=a%pow(10, m)
        w=b//pow(10, m)
        z=b%pow(10, m)

        r=prod2(x+y, w+z)
        p=prod2(x,w)
        q=prod2(y,z)
        return p*pow(10, 2*m)+(r-p-q)*pow(10,m)+q

a=1234567812345678
b=2345678923456789

threshold=4
print(prod2(a,b))
print(a*b)

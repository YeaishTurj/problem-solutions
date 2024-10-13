def res(x,m):
    l=0
    r=len(x)-1
    ind=-1
    while l<=r:
        mid=(l+r)//2
        if x[mid]<=m:
            ind=mid
            l=mid+1
        elif x[mid]>m:
            r=mid-1
    return ind+1

n=int(input())
x=list(map(int,input().split()))
x.sort()
q=int(input())
for _ in range(q):
    m=int(input())
    print(res(x,m))
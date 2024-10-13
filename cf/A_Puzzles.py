n,m=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
i=0
mn=10000000000
while i<=m-n:
    mn=min(mn, a[i+n-1]-a[i])
    i+=1
print(mn)
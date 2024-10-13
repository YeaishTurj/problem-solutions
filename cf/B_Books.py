def ind(a,x):
    l=0
    r=len(a)-1
    while l<=r:
        mid=(l+r)//2
        if a[mid]<=x: l=mid+1
        else: r=mid-1
    return l

n,t=map(int,input().split())
a=list(map(int,input().split()))
# a.sort()
prefix=[0]
for i in range(n):
    prefix.append(prefix[i]+a[i])
# print(a)
# print(prefix)
mx=-1
for i in range(n+1):
    mx=max(mx,ind(prefix,prefix[i]+t)-i-1)
print(mx)
def ans(a,x):
    l=0
    r=len(a)-1
    while l<=r:
        mid=(l+r)//2
        if a[mid]==x: return mid
        elif a[mid]<=x: l=mid+1
        else: r=mid-1
    return l
n=int(input())
a=list(map(int,input().split()))
prefix=[]
for i in range(n):
    if i: prefix.append(prefix[i-1]+a[i])
    else: prefix.append(a[i])
m=int(input())
q=list(map(int,input().split()))
# print(prefix)
for it in q:
    res=ans(prefix,it)
    print(res+1)
# 2 9 12 16 25 --1
# 0 4 2 12
# 0 1 0 2
# 1 1
# 
# 
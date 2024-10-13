import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    p,q=[0]*n,[0]*n
    for i in range(a):
        p[i]=i+1
        q[i]=i+1
    i=n-1
    while i>=0 and n-i-1<b and p[i]==0:
        p[i]=i+1
        q[i]=i+1
        i-=1
    l,r=0,n-1
    while l<n and p[l]: l+=1
    while r>=0 and p[r]: r-=1
    if r-l+1>0:
        while l<=r:
            p[l]=l
            q[r]=l
            l+=1
            r-=1
    l,r=0,n-1
    while l<n and p[l]==q[l]:
        l+=1
    while r>=0 and p[r]==q[r]:
        r-=1
    if l==a and n-r-1==b: print("Yes")
    else: print("No")
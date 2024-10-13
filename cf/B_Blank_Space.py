import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l=ans=0
    while l<n:
        r=l
        while r<n and a[r]==0:
            r+=1
        if l==r: l+=1
        else: 
            ans=max(ans,r-l)
            l=r
    print(ans)
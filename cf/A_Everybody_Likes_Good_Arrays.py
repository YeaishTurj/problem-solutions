import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    l,ans=0,0
    while l<n:
        r=l+1
        while r<n and a[l]&1 == a[r]&1:
            r+=1
        ans+=r-l-1
        l=r
    print(ans)
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=sorted(list(map(int,input().split())),reverse=True)
    ans=0
    for i in range(0,n-1,2):
        ans+=a[i]-a[i+1]
    ans=max(0,ans-k)
    if n&1: ans+=a[-1]
    print(ans)
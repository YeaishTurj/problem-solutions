import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if a!=sorted(a): print(0)
    else:
        ans=10000000000
        for i in range(1,n):
            ans=min(ans,(a[i]-a[i-1])//2 +1)
        print(ans)
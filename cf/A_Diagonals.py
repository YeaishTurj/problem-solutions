import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    res=0
    if k>=n:
        res=1
        k-=n
    for i in range(1,n):
        if n-i<=k: 
            res+=1
            k-=n-i
        if n-i<=k: 
            res+=1
            k-=n-i
    print(res)
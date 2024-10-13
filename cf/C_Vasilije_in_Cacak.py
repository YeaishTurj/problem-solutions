import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k,x=map(int,input().split())
    mn=k*(k+1)//2
    mx=n*(n+1)//2 - (n-k)*(n-k+1)//2
    if mn<=x and x<=mx: print("YES")
    else: print("NO")
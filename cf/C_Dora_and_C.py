import math
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    c=list(map(int,input().split()))
    g=math.gcd(a,b)
    for i in range(n):
        c[i]%=g
    c.sort()
    ans=c[-1]-c[0]
    for i in range(1,n):
        ans=min(ans,abs(c[i-1]+g-c[i]))
    print(ans)
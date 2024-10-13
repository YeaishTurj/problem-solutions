import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,x=map(int,input().split())
    # a*b+b*c+c*a<=n, a+b+c<=x
    ans=0
    for a in range(1,n):
        for b in range(1,(n//a)+1):
            c=min((n-a*b)//(a+b),x-a-b)
            if c>0: ans+=c
    print(ans)
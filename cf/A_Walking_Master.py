import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b,c,d=map(int,input().split())
    if d<b: print(-1)
    else:
        ans=d-b
        if c>a+ans: print(-1)
        else: print(ans+a+ans-c)
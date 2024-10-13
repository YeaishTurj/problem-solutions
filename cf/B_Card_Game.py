import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a1,a2,b1,b2=map(int,input().split())
    ans=0
    if a1>b1 and a2>=b2 or a2>b2 and a1>=b1: ans+=2
    if a2>b1 and a1>=b2 or a1>b2 and a2>=b1: ans+=2
    print(ans)
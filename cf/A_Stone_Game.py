import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    x,y=min(a.index(min(a)),a.index(max(a))),max(a.index(min(a)),a.index(max(a)))
    ans=min(y+1,n-x,x+1+n-y)
    print(ans)
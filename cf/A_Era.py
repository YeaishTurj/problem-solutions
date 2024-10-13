import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=0
    for i,it in enumerate(a):
        if i+1<it: ans=max(ans,it-i-1)
    print(ans)
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if a!=sorted(a): print(0)
    else:
        mn=1000000000
        for i in range(n-1):
            mn=min(mn,a[i+1]-a[i])
        print(mn//2+1)
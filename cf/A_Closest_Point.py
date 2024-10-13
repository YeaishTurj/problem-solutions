import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n==2 and a[-1]-a[0]>1: print("YES")
    else: print("NO")
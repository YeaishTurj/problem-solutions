import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    if k>1 or a==sorted(a): print("YES")
    else: print("NO")
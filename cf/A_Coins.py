import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    if n%2==0 or n&1 and k&1: print("YES")
    else: print("NO")
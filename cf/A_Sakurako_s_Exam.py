import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b=map(int,input().split())
    if a&1: print("NO")
    elif b&1 and not a: print("NO")
    else: print("YES")
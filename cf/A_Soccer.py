import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if a<=b and a<=d and b<=c and d<=c: print("NO")
    elif b<=a and b<=c and a<=d and c<=d: print("NO")
    else: print("YES")
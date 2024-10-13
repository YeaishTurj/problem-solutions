import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,s,m=map(int,input().split())
    flag=0
    prev=0
    for _ in range(n):
        l,r=map(int,input().split())
        if l-prev>=s: flag=1
        prev=r
    if m-prev>=s: flag=1
    print("YES") if flag else print("NO")
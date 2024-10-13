import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    x,y,k=map(int,input().split())
    while x!=1 and k:
        next=(x//y)*y+y
        if k<next-x: break
        k-=next-x
        x=next
        while x%y==0: x//=y
    if x!=1: print(x+k)
    else:
        k=k%(y-1)
        print(x+k)
import sys
input=sys.stdin.buffer.readline
def solve():
    arr=[]
    for _ in range(int(input())):
        x,y=map(int,input().split())
        arr.append((x,y))
    xa,ya,xb,yb=map(int,input().split())
    t=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)
    for x,y in arr:
        t1=(xb-x)*(xb-x)+(yb-y)*(yb-y)
        if t1<=t:
            print("NO")
            return
    print("YES")
for _ in range(int(input())):
    solve()
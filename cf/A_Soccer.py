import sys
input=sys.stdin.buffer.readline
def solve():
    x1,y1=map(int,input().split())
    x2,y2=map(int,input().split())
    if x1==x2 and y1==y2: print("YES")
    else:
       # increase x, fix y
       if y1>x2: 
          print("YES")
          return
       elif y1<x1 and y2<x2: 
          print("YES")
          return
       # increase y, fix x
       if x1>y2: 
          print("YES")
          return
       elif x1<y1 and x2<y2: 
          print("YES")
          return
       print("NO")
for _ in range(int(input())):
    solve()
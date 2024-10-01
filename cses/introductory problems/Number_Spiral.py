import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    y,x=map(int,input().split())
    m=max(x,y)-1
    corner=1+m*(m+1)
    print(corner)
    if y==m and x==m:
        print(corner)
    elif m&1:
        # upore kombe, left e barbe
    else:
        # upore barbe, left e kombe
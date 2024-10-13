import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    x,y=map(int,input().split())
    timeM,timeC=abs(x), y+abs(x)
    if timeC+1>=timeM: print("YES")
    else: print("NO")
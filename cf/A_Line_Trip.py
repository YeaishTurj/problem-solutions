from collections import deque
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=deque(map(int,input().split()))
    a.appendleft(0)
    a.append(x)
    dis=[]
    for i in range(1,n+2):
        dis.append(a[i]-a[i-1])
    print(max(max(dis),2*dis[-1]))
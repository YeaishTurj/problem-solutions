from collections import deque
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=deque(map(int,input().split()))
    a.append(a[0])
    a.popleft()
    print(*a)
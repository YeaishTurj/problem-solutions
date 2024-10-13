import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    x,k=map(int,input().split())
    if x%k: print(1,x)
    else: 
        print(2,x-1,1)
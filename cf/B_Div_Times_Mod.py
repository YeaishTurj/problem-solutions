import sys
input=sys.stdin.buffer.readline
n,k=map(int,input().split())
i=k-1
while i:
    if n%i==0:
        print((n//i)*k + i)
        exit()
    i-=1
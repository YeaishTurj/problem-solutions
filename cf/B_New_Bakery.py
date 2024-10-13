import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,a,b=map(int,input().split())
    k=min(max(0,b-a+1),n)
    print(b*k-k*(k-1)//2+(n-k)*a)
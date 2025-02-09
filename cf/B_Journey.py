import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,a,b,c=map(int,input().split())
    total=a+b+c
    x=(n+total-1)//total
    days=3*x
    walks=x*total
    if walks-c-b>=n: print(days-2)
    elif walks-c>=n: print(days-1)
    else: print(days)
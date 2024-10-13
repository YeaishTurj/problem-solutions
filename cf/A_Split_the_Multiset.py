import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    cnt=0
    while n>1:
        n-=(k-1)
        cnt+=1
    print(cnt)
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=map(int,input().split())
    ans=sum(abs(it) for it in a)
    print(ans)
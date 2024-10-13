import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    print(min(n,k)*min(m,k))
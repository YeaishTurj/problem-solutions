import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    print(max(list(it for i,it in enumerate(a) if i%2==0)))
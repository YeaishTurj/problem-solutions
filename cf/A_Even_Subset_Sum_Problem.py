import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    even=list(filter(lambda x:a[x-1]%2==0,range(1,n+1)))
    odd=list(filter(lambda x:a[x-1]&1,range(1,n+1)))
    if len(odd)&1: odd.pop()
    if even: print(len(even),*even)
    elif odd: print(len(odd),*odd)
    else: print(-1)
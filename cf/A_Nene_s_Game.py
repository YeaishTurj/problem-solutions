import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    m,q=map(int,input().split())
    a=list(map(int,input().split()))
    mn=a[0]
    n=list(map(int,input().split()))
    for it in n:
        if it>=mn: print(mn-1,end=" ")
        else: print(it,end=" ")
    print()
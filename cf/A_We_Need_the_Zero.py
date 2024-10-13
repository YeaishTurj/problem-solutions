import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    xor=0
    for it in a:
        xor^=it
    if xor==0: print(0)
    elif n%2==0: print(-1)
    else: print(xor)
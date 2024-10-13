import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n&1: print(8,*([1,n-1]*4),*([2,n]*4))
    else: print(8,*([1,n]*8))
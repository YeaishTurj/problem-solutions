import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    odd=sum([1 for it in a if it&1])
    even=n-odd
    if odd&1: print("NO")
    else: print("YES")
import math
n,m=map(int,input().split())
if n>=m: print(n-m)
else:
    cnt=0
    while m>n:
        if m&1: m+=1
        else: m//=2
        cnt+=1
    cnt+=(n-m)
    print(cnt)
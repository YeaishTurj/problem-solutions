import math
for _ in range(int(input())):
    n,k=map(int,input().split())
    if k<=4*(n-1): print(math.ceil(k/2))
    elif k==4*n-2: print(2*n)
    else: print(2*n-1)
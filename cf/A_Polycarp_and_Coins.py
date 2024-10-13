import math
for _ in range(int(input())):
    n=int(input())
    # c1+2*c2=n
    c1=n//3
    c2=2*n/3
    if int(c2)&1: c2+=1
    else: c1+=math.ceil(c2)-math.floor(c2)
    print(int(c1),int(c2)//2)
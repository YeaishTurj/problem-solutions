import math
for _ in range(int(input())):
    n,k=map(int,input().split())
    k=math.ceil(n/k)*k
    mx=k//n
    if k%n: mx+=1
    print(mx)
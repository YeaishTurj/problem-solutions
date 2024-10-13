import math
for _ in range(int(input())):
    k,x=map(int,input().split())
    if x>=k*k: print(2*k-1)
    elif x<=k*(k+1)//2: 
        y = math.ceil((-1+math.sqrt(1+8*x))/2)
        if y*(y+1)//2<x: y+=1 
        print(y)
    else:
        print(-1)
        x-=k*(k+1)//2
        y= math.ceil((-(1-2*k)-math.sqrt((1-2*k)*(1-2*k)-8*x) )/2)
        print(k+y)

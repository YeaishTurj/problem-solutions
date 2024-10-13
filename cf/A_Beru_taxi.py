import math
mn=100000000000
a,b=map(int,input().split())
for _ in range(int(input())):
    x,y,v=map(int,input().split())
    mn=min(mn, math.sqrt((pow(x-a, 2)+pow(y-b, 2)))/v)
print(mn)
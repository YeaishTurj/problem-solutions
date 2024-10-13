import math
for _ in range(int(input())):
    x=int(input())
    dig=math.floor(math.log10(x)+1)
    print(10*(x%10-1)+dig*(dig+1)//2)
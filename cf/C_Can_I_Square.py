import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    total=sum(it for it in a)
    if math.sqrt(total)==int(math.sqrt(total)): print("YES")
    else: print("NO")
import sys
import math
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    total=n*(n+1)//2
    if total==int(math.sqrt(total))**2:
        print(-1)
    else:
        arr=[i for i in range(1,n+1)]
        prefix=0
        for i in range(n-1):
            prefix+=arr[i]
            if prefix==int(math.sqrt(prefix))**2:
                arr[i],arr[i+1]=arr[i+1],arr[i]
                prefix+=1
        print(*arr)
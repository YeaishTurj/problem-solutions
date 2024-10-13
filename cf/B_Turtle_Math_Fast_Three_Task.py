import math
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    total=sum(a)
    if total%3==0: print(0)
    elif (total+1)%3==0: print(1)
    else:
        ans=2
        for it in a:
            if (total-it)%3==0: ans=1
        print(ans)
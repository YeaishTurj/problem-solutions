import math
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if c!=a+1: print(-1)
    else:
        if a==0: print(b)
        else:
            level=math.ceil(math.log2(a+1))-1
            rem=b%(a+1)
            cntA=a-(pow(2,level)-1)
            if rem>=0: level+=b//(a+1)
            if a+1-cntA*2>=rem: print(level+1)
            else: print(level+2)

            # try to fill the leaf nodes of A from right
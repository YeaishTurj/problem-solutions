import math
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list((map(int,input().split())))
    flag=0
    a.sort()
    for i in range(len(a)):
        for j in range(i):
            if math.gcd(a[i],a[j])==1 or math.gcd(a[i],a[j])==2:
                flag=1
                break
        if flag: break
    if flag: print("Yes")
    else: print("No")

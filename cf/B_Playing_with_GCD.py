import sys
input=sys.stdin.buffer.readline
import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    new_a=[]
    new_a.append(1)
    for it in a: new_a.append(it)
    new_a.append(1)
    b=[]
    for i in range(n+1):
        b.append(new_a[i]*new_a[i+1]//math.gcd(new_a[i],new_a[i+1]))
    # print(b)
    flag=1
    for i in range(n-1):
        if math.gcd(b[i],b[i+1])!=a[i]:
            flag=0
            break
    if flag: print("YES")
    else: print("NO")
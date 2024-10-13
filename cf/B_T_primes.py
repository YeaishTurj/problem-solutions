import sys
input=sys.stdin.readline
import math
N=1000001
prime=[1 for _ in range(N)]
prime[0]=prime[1]=0
for i in range(2, int(math.sqrt(N)+1)):
    j=i*i
    while j<N:
        prime[j]=0
        j+=i
n=int(input())
for it in map(int,input().split()):
    if int(math.sqrt(it))==math.sqrt(it) and prime[int(math.sqrt(it))]:
        print("YES")
    else: print("NO")
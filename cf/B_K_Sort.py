import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if a==sorted(a): print(0)
    else:
        check=a[0]
        increase=[]
        for it in a:
            if it<check: increase.append(check-it)
            elif it>check: check=it
        increase.sort()
        cost=0
        n=len(increase)
        for i in range(n):
            if i: cost+=(increase[i]-increase[i-1])*(n-i+1)
            else: cost+=increase[i]*(n-i+1)
        print(cost)

# 344 12(332)=344 37(307)=344 60(284)=344 
# 311(33)=344 613 365(248)=613 328(285)=613 675

# 332 307 284 33 248 285
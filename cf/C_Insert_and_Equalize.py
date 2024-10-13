import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n==1: print(1)
    else:
        a.sort()
        b=[]
        i=1
        while i<n:
            b.append(a[i]-a[i-1])
            i+=1
        x=0
        for it in b:
            x=math.gcd(x,it)
        cnt=0
        i=0
        while i<n:
            cnt+=(a[n-1]-a[i])//x
            i+=1
        flag=0
        i=n-1
        cnt1=1
        while i>=0:
            if a[i]-x==a[i-1]: cnt1+=1
            else: break
            i-=1
        print(min(cnt+n, cnt+cnt1))
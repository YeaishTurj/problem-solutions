import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    odd=sum([1 for it in a if it&1])
    if odd!=n and odd!=0: print(-1)
    else:
        res=[]
        msb=0
        for i in range(32):
            for it in a:
                if it&(1<<i): msb=max(msb,i)
        while msb>=0:
            res.append(1<<msb)
            for i in range(n):
                a[i]=abs(a[i]-res[-1])
            # print(a)
            if [a[0]]*n==a: 
                res.append(a[0])
                break
            msb-=1
        print(len(res),*res)
    # print("-----")
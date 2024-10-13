import math
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    # print(a)
    if n==1:
        if k<=a[0]: print(k-1)
        else: print(k)
    else:
        gcd=0
        for it in a:
            gcd=math.gcd(gcd,it)
        # print(gcd)
        # 0.x 1.x 2.x 3.x
        for i in range(n-1,):
            a[i]=(i+1)*gcd
        a.pop()

        # kth missing positive number

        if k<a[0]: print(k)
        else:
        #     for it in a:
        #         if it<=k: k+=1
        #         else: break
        #     print(k)
            missingCnt=[0]*(n-1)
            for i in range(1,n):
                missingCnt[i-1]=a[i-1]-i
            # print(a,missingCnt)
            l,r=0,len(a)-1
            while l<=r:
                mid=(l+r)//2
                if missingCnt[mid]<k: l=mid+1
                else: r=mid-1
            print(a[r]+k-missingCnt[r])
        # print("-----")
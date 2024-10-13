import bisect
import math
for _ in range(int(input())):
    x,n=map(int,input().split())
    if x%n==0: print(x//n)
    else:
        ans=x//n
        if (x%n)%(x//n)==0: print(ans)
        else:
            y=x%n
            s=set()
            # print(math.sqrt(x))
            for i in range(1,int(math.sqrt(x))+1):
                if x%i==0:
                    s.add(i)
                    s.add(x//i)
            divisor=list(s)
            divisor.sort()
            # print(divisor,ans)
            ind=bisect.bisect_left(divisor,ans)-1
            while ind>=0 and ans and y%ans!=0:
                y+=n*(ans-divisor[ind])
                ans=divisor[ind]
                ind-=1
            print(ans)
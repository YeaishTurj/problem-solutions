import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,x,y=map(int,input().split())
    a=list(map(int,input().split()))
    total=sum(a)
    mx,mn=max(0,total-x),max(0,total-y)
    
    if mn==0 and mx==0: print(0)
    else: 
        # print(mn,mx)
        a.sort()
        # print(a)

        def sumGreaterThanMN(num,i):
            l,r=i+1,n-1
            ind=n
            while l<=r:
                mid=(l+r)//2
                if a[mid]+num>=mn: 
                    ind=mid
                    r=mid-1
                else: l=mid+1
            return ind
    
        def sumLessThanMX(num,i):
            l,r=i+1,n-1
            ind=n
            while l<=r:
                mid=(l+r)//2
                if a[mid]+num<=mx: 
                    ind=mid
                    l=mid+1
                else: r=mid-1
            return ind
        
        ans=0
        for i in range(n):
            l=sumGreaterThanMN(a[i],i)
            r=sumLessThanMX(a[i],i)
            # print(a[i],l,r)
            if r!=n:
                ans+=r-l+1
        print(ans)

    # print("-------")
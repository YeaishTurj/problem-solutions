n,x=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
i,j,ans=0,n-1,0
while i<=j:
    if a[i]+a[j]<=x:
        i+=1
        j-=1
    else:
        j-=1
    ans+=1
print(ans)
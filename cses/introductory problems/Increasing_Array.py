n=int(input())  
a=list(map(int,input().split()))
i,ans=1,0
while i<n:
    if a[i]<a[i-1]:
        ans+=a[i-1]-a[i]
        a[i]=a[i-1]
    i+=1
print(ans)
n,m=map(int,input().split())
ans=0
while n:
    if n>=m:
        ans+=m
        n+=1
        n-=m
    else:
        ans+=n
        n-=n
print(ans)
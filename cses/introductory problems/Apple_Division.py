n=int(input())
a,ans=list(map(int,input().split())),0
for i in range(1,1<<n):
    s1=0
    s2=0
    for j in range(n):
        if i&(1<<j):
            s1+=a[j]
        else:
            s2+=a[j]
    if i==1:
        ans=abs(s1-s2)
    else:
        ans=min(ans,abs(s1-s2))
print(ans)
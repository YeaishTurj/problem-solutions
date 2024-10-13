n,m=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
neg=sum(1 for it in a if it<0)
res=0
for i in range(min(neg,m)):
    res+=a[i]
print(abs(res))
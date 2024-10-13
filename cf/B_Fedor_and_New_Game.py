n,m,k=map(int,input().split())
a=[]
for _ in range(m+1):
    x=int(input())
    a.append(x)
friends=0
for i in range(0,m):
    j=0
    cnt=0
    while j<n:
        if a[i]&(1<<j) != a[m]&(1<<j): cnt+=1
        j+=1
    if cnt<=k: friends+=1
print(friends)
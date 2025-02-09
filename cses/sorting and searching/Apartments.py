n,m,k=map(int,input().split())
a=sorted(list(map(int,input().split())))
b=sorted(list(map(int,input().split())))
i,j,cnt=0,0,0
while i<n and j<m:
    if a[i]-k<=b[j]<=a[i]+k:
        i+=1
        j+=1
        cnt+=1
    elif a[i]+k<b[j]:
        i+=1
    else:
        j+=1
print(cnt)
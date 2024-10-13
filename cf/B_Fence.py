n,k=map(int,input().split())
h=list(map(int,input().split()))
prefix=[0]
for i in range(n):
    prefix.append(prefix[i]+h[i])
i=ind=0
mn=1000000000
# print(prefix)
while i<n+1-k:
    if prefix[i+k]-prefix[i]<mn:
        mn=prefix[i+k]-prefix[i]
        ind=i
    i+=1
# print(mn)
print(ind+1)
n=int(input())
a=list(map(int,input().split()))
i=j=0
mx=0
while i<n:
    j=i+1
    while j<n and a[j]>a[j-1]:
        j+=1
    mx=max(mx,j-i)
    i=j
# mx=max(mx,j-i-1)
print(mx)
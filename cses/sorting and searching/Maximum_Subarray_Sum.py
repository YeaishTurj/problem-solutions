# kadane's algorithm
n=int(input())
a=list(map(int,input().split()))
curr,mx=0,max(a)
for i in range(n):
    curr+=a[i]
    mx=max(mx,curr)
    if curr<0:
        curr=0
print(mx)
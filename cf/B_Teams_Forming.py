n=int(input())
a=list(map(int,input().split()))
a.sort()
res=0
# print(a)
i=1
while i<n:
    res+=a[i]-a[i-1]
    i+=2
print(res)
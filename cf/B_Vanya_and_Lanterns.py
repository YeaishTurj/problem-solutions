n,l=map(int,input().split())
a=list(map(int,input().split()))
if len(a)==1:
    print(max(a[0], l-a[0]))
else:
    a.sort()
    mx=-1
    for i in range(1,n):
        mx=max(mx, a[i]-a[i-1])
    print(max(mx/2, a[0], l-a[n-1]))
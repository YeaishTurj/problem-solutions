n=int(input())
a=list(map(int,input().split()))
res=[0 for _ in range(n)]
for i in range(n):
    res[a[i]-1]=i+1
for it in res: print(it, end=" ")
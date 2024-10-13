n,k=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
# print(a)
if k==0 and a[0]==1: print(-1)
elif k==0: print(1)
else:
    ind=k-1
    # print(a[ind])
    if ind!=n-1 and a[ind]==a[ind+1]: print(-1)
    else: print(a[ind])
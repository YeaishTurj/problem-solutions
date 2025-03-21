n,x=map(int,input().split())
a=list(map(int,input().split()))
b=[]
for i in range(n):
    b.append((a[i],i+1))
b.sort()

def solve(ind,val):
    l,r=ind+1,n-1
    while l<=r:
        mid=(l+r)//2
        if b[mid][0]==val:
            return b[mid][1]
        elif b[mid][0]>val:
            r=mid-1
        else:
            l=mid+1
    return -1

for i in range(n):
    ind=solve(i,x-b[i][0])
    if ind!=-1:
        print(b[i][1],ind)
        exit()
print("IMPOSSIBLE")

        
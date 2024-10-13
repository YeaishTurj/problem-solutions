n,t=map(int,input().split())
a=list(map(int,input().split()))
flag=0
i=0
while True:
    if i+1==t:
        flag=1
        break
    i+=a[i]
    if i+1==t:
        flag=1
        break
    if i>=n-1: break
if flag: print("YES")
else: print("NO")
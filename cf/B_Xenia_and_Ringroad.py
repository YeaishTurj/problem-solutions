n,m=map(int,input().split())
a=list(map(int,input().split()))
prev=1
res=0
for it in a:
    if it<prev: res+=n-prev+it
    else: res+=it-prev
    prev=it
print(res)
n=int(input())
a=list(map(int,input().split()))
mn=min(a)
mx=max(a)
mn_pos=0
mx_pos=n
for i in range(n):
    if a[i]==mn: mn_pos=i+1
    if a[i]==mx: mx_pos=min(mx_pos,i+1)
if mx==mn: print(0)
elif mx_pos<mn_pos: print(mx_pos-1+n-mn_pos)
else: print(mx_pos-1+n-mn_pos-1)
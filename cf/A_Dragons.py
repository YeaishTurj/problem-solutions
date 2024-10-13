a=[]
s,n=map(int,input().split())
for i in range(n):
    a.append(tuple(map(int,input().split())))
a.sort(key=lambda x:(x[0], -x[1]))
i=0
while i<n:
    if a[i][0]>=s: break
    s+=a[i][1]
    i+=1
if i==n: print("YES")
else: print("NO")
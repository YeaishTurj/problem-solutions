n=int(input())
v=list(map(int,input().split()))
u=[it for it in v]
u.sort()
prefV=[]
prefU=[]
prefU.append(0)
prefV.append(0)
for i in range(1,n+1):
    prefV.append(prefV[i-1]+v[i-1])
    prefU.append(prefU[i-1]+u[i-1])
# print(v,u)
# print(prefV,prefU)
for _ in range(int(input())):
    type,l,r=map(int,input().split())
    mn=min(l,r)
    mx=max(l,r)
    if type==1: print(prefV[mx]-prefV[mn-1])
    else: print(prefU[mx]-prefU[mn-1])
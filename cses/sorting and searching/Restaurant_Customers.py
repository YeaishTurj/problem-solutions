n=int(input())
arrive,leave=[],[]
for _ in range(n):
    a,b=map(int,input().split())
    arrive.append(a)
    leave.append(b)
arrive.sort()
leave.sort()
i,j=0,0
ans=0
cur=0
while i<n and j<n:
    if arrive[i]<leave[j]:
        cur+=1
        i+=1
    else:
        cur-=1
        j+=1
    ans=max(ans,cur)
print(ans)

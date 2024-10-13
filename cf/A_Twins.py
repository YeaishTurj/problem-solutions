n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
total=sum(a)
cnt=0
cur=0
for it in a:
    if cur*2>total: break
    cur+=it
    cnt+=1
print(cnt)
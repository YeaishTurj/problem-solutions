import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=sorted(list(map(int,input().split())))
    prefix=[0]*2*k
    for it in a:
        start=(it-1)%(2*k)
        # print(start,end=" ")
        prefix[start]+=1
        end=start+k
        if end<2*k:
            prefix[end]-=1
        else:
            prefix[0]+=1
            prefix[start-k]-=1
        # print(prefix)
    for i in range(1,2*k):
        prefix[i]+=prefix[i-1]
    pos=(a[-1]-1)%(2*k)
    ind,cnt=pos,0
    ans=-1
    while True:
        if prefix[ind]==n:
            ans=cnt
            break
        ind=(ind+1)%(2*k)
        if ind==pos: break
        cnt+=1
    if ans==-1: print(-1)
    else: print(a[-1]+ans)
import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    total,prod,pos=0,1,0
    for it in a:
        total+=it
        prod*=it
        pos+=(it>0)
    if total>=0 and prod==1: print(0)
    else:
        # print(pos,n-pos)
        a.sort()
        ans=0
        while total<0 or prod==-1:
            total+=2
            prod*=-1
            ans+=1
        print(ans)
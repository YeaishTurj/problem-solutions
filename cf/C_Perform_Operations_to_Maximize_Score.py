import sys
input=sys.stdin.buffer.readline
def solve():
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ab=[(-1,-1)]+sorted(list(zip(a,b)))
    # print(ab[1:n+1])
    mx_ind,i=-1,n
    while i>0:
        val,ok=ab[i]
        if ok:
            mx_ind=i
            break
        i-=1
    med1,med2=n//2,(n+2)//2
    ans=0
    if mx_ind<=med1 and mx_ind!=-1: ans=ab[mx_ind][0]+k+ab[med2][0]
    elif mx_ind!=-1: ans=ab[mx_ind][0]+k+ab[med1][0]

    def check(x,y):
        cnt,i=0,n-1
        while i>0:
            val,ok=ab[i]
            if val>=x: cnt+=1
            elif ok and x-val<=y:
                cnt+=1
                y-=x-val
            i-=1
        return cnt>=n-n//2

    l,r=ab[1][0],ab[-1][0]+k
    # print(l,r,k)
    while l<=r:
        mid=(l+r)//2
        if check(mid,k): l=mid+1
        else: r=mid-1
    print(max(ans,ab[n][0]+r))

for _ in range(int(input())):
    solve()
    # print("----------")
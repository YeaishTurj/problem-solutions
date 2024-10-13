import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    w=int(input())
    a=sorted(list(map(int,input().split())))
    # rowPrefix,colPrefix=[0]*(n+10),[0]*(m+10)
    # for i in range(n-k+1):
    #     rowPrefix[i]+=1
    #     rowPrefix[i+k]-=1
    # for i in range(m-k+1):
    #     colPrefix[i]+=1
    #     colPrefix[i+k]-=1
    # for i in range(n):
    #     rowPrefix[i]+=rowPrefix[i-1]
    # for i in range(m):
    #     colPrefix[i]+=colPrefix[i-1]
    arr=[]
    for i in range(n):
        for j in range(m):
            # arr.append(rowPrefix[i]*colPrefix[j])
            up=max(0,i-k+1)
            down=min(i,n-k)
            left=max(0,j-k+1)
            right=min(j,m-k)
            arr.append((down-up+1)*(right-left+1))
    arr.sort()
    ans=0
    while a:
        ans+=a[-1]*arr[-1]
        a.pop()
        arr.pop()
    print(ans)
import sys
input=sys.stdin.buffer.readline
n=int(input())
a=list(map(int,input().split()))
dp=[[0 for _ in range(3)] for _ in range(n+1)]
for i in range(1,n+1):
    for j in range(3):
        idle=dp[i-1][0]
        write=0 if j==1 or a[i-1]==0 or a[i-1]==2 else 1+dp[i-1][1]
        sport=0 if j==2 or a[i-1]==0 or a[i-1]==1 else 1+dp[i-1][2]
        dp[i][j]=max(idle,write,sport)
print(n-max(dp[n]))
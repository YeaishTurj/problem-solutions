import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    dp=[[-1 for _ in range(m+1)] for _ in range(n+1)]
    def cost(i,j):
        if i<1 or j<1: return float("inf")
        if i==1 and j==1:
            return 0
        if dp[i][j]!=-1: return dp[i][j]
        fromUp=j+cost(i-1,j)
        fromLeft=i+cost(i,j-1)
        dp[i][j]=min(fromUp,fromLeft)
        return dp[i][j]
    print("YES" if cost(n,m)==k else "NO")
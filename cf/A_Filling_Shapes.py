n=int(input())
dp=[-1]*(n+1)
def ways(n):
    if n&1: return 0
    if n<=0: return 1
    if dp[n]==-1:
        dp[n]=2*ways(n-2)
    return dp[n]
print(ways(n))
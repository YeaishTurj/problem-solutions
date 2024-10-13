import sys
input=sys.stdin.buffer.readline
n=int(input())
a=list(map(int,input().split()))
N=max(a)
hash=[0]*(N+10)
for it in a: hash[it]+=1
# dp=[0]*(N+10)

# def points(i):
#     if i<=0: return 0
#     if dp[i]==-1:
#         pick=hash[i]*i+points(i-2)
#         not_pick=points(i-1)
#         dp[i]=max(pick,not_pick)
#     return dp[i]

# for i in range(1,N+1):
#     pick=hash[i]*i
#     if i-2>=0: pick+=dp[i-2]
#     not_pick=dp[i-1]
#     dp[i]=max(pick,not_pick)
# print(dp[N])

prev1,prev2=0,0
for i in range(1,N+1):
    pick=hash[i]*i+prev2
    not_pick=prev1
    prev2=prev1
    prev1=max(pick,not_pick)
print(prev1)
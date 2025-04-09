n=int(input())
a=list(map(int,input().split()))
a.sort()
mid=0
if n&1:
    mid=a[n//2]
else:
    mid=(a[n//2]+a[n//2-1])//2
ans=0
for it in a:
    ans+=abs(it-mid)
print(ans)

# n=int(input())
# p=list(map(int,input().split()))
 
# def calculateCost(x):
#     return sum([abs(i-x) for i in p])
 
# l,r=min(p),max(p)
# # for i in range(l,r+1):
# #     print(i,calculateCost(i))
 
# while l<r:
#     mid=(l+r)//2
#     if calculateCost(mid)<calculateCost(mid+1):
#         r=mid
#     else:
#         l=mid+1
# print(calculateCost(l))
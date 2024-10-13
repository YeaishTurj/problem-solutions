# import sys
# input=sys.stdin.buffer.readline
# # print(3**12)
# arr=[]
# for i in range(1,13):
#     arr.append([3**(i-1),(3**(i))-1])
# for _ in range(int(input())):
#     l,r=map(int,input().split())

#     ind=0
#     for i,it in enumerate(arr):
#         if it[0]<=l and l<=it[1]:
#             ind+=i+1
#             break
#     next=(l+1)*(3**ind)
#     next_num=l+1
#     # print(ind,next)
#     i=ind-1
#     ans,num=0,r-l+1
#     while i<len(arr):
#         # lower limit - upper limit
#         upper=min(arr[i][1],r)
#         if upper-l+1<=num:
#             if l<=next_num and next_num<=upper: ans+=(upper-l)*(i+1)
#             else: ans+=(upper-l+1)*(i+1)
#             # print(ans)
#         if upper==r: break
#         l=upper+1
#         i+=1
#     # break
#     i=1
#     while next//(3**i):
#         i+=1
#     print(ans+i)
#     # print("-------")
# # print(arr)


import sys
input=sys.stdin.buffer.readline
prefix=[0]*200001
for i in range(200001):
    n,step=i,0
    while n:
        n//=3
        step+=1
    if i: prefix[i]=step+prefix[i-1]
# for i in range(100):
    # print(i,prefix[i])

for _ in range(int(input())):
    l,r=map(int,input().split())
    print(prefix[l]-prefix[l-1]+prefix[r]-prefix[l-1])
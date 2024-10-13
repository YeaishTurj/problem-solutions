import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    a=[i for i in range(1,n+1)]
    a[:m]=a[:m][::-1]
    print(*a[::-1])

# import sys
# input=sys.stdin.buffer.readline
# for _ in range(int(input())):
#     n,m,k=map(int,input().split())
#     # g--> summation of x<=m
#     # f--> summation of x>=k
#     a=[0]*n
#     i=n-1
#     while i>=0 and m:
#         a[i]=m
#         m-=1
#         i-=1
#     i=0
#     x=n
#     while i<n and a[i]==0:
#         a[i]=x
#         x-=1
#         i+=1
#     print(*a)
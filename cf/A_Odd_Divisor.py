for _ in range(int(input())):
    n=int(input())
    if n&(n-1): print("YES")
    else: print("NO")

    
# for _ in range(int(input())):
#     n=int(input())
#     m=n
#     cnt=0
#     while n:
#         n&=(n-1)
#         cnt+=1
#     if cnt==1: print("NO")
#     else: print("YES")
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    odd=sum(it for it in a if it&1)
    even=sum(a)-odd
    if even>odd: print("YES")
    else: print("NO")
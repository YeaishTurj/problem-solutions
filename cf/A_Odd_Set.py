for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    odd=len(list(filter(lambda x: x&1, a)))
    # print(odd, 2*n-odd)
    if odd==n: print("YES")
    else: print("NO")
for _ in range(int(input())):
    n=int(input())
    if len(set(map(int,input().split())))==n: print("YES")
    else: print("NO")
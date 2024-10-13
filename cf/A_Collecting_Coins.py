for _ in range(int(input())):
    a,b,c,n=map(int,input().split())
    makeEqual=3*max(a,b,c)-a-b-c
    if n-makeEqual>=0 and (n-makeEqual)%3==0: print("YES")
    else: print("NO")
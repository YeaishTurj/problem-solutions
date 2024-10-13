for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    mn=11111111111111111
    for i in range(n-1):
        mn=min(mn,abs(a[i]-a[i+1]))
    print(mn)
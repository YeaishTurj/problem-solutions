for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    ans=1
    for i in range(1,n):
        ans*=a[i]
    print(ans*(a[0]+1))
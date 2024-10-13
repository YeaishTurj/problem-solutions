for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    num=0
    cnt=0
    i=n-1
    mx=max(a)
    while i>=0:
        if a[i]>num:
            num=a[i]
            cnt+=1
        if num==mx: break
        i-=1
    print(cnt-1)
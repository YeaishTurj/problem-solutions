for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    # print(a)
    # print(b)
    i1=i2=0
    j1=m-1
    j2=n-1
    cnt=0
    ans=0
    while cnt<n:
        if abs(a[i1]-b[j1])>abs(a[j2]-b[i2]):
            ans+=abs(a[i1]-b[j1])
            cnt+=1
            i1+=1
            j1-=1
        else:
            ans+=abs(a[j2]-b[i2])
            cnt+=1
            i2+=1
            j2-=1
    print(ans)
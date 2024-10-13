for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    prefix=[0]
    for it in a:
        prefix.append(prefix[-1]+it)
    # print(prefix)
    s=input()
    l,r=0,n-1
    ans=0
    while l<r:
        if s[l]!=s[r]:
            if s[l]=='L' and s[r]=='R':
                ans+=prefix[r+1]-prefix[l]
                l+=1
                r-=1
            else:
                l+=1
                r-=1
        elif s[l]=='R':
            l+=1
        else:
            r-=1
    print(ans)
    
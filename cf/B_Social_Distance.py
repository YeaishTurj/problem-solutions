for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    if m<=n: print("NO")
    else:
        a.sort()
        # print(m)
        # print(a)
        empty=a[0]
        last=a[0]
        i=1
        while i<n:
            last+=max(a[i-1],a[i])+1
            i+=1
        # print(last)
        empty_for_last=(m-last-1+empty)
        if empty_for_last>=a[n-1]: print("YES")
        else: print("NO")
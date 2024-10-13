for _ in range(int(input())):
    n,k,x=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort(reverse=True)
    # print(k,x,a)
    prefix=[]
    for i in range(n):
        if i==0: prefix.append(a[i])
        else: prefix.append(a[i]+prefix[i-1])
    # print(prefix)
    mx=prefix[n-1]-2*prefix[x-1]
    for i in range(k):
        curr=prefix[n-1]-prefix[i]-2*(prefix[min(n-1,i+x)]-prefix[i])
        mx=max(curr,mx)
    print(mx)
    # print("-------------")
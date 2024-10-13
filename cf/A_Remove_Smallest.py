for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n==1: print("YES")
    else:
        a.sort()
        # print(a)
        cnt=0
        for i in range(1,n):
            if a[i]-a[i-1]<=1: cnt+=1
        if n-cnt==1: print("YES")
        else: print("NO")
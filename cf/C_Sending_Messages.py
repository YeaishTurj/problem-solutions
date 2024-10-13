for _ in range(int(input())):
    n,f,a,b=map(int,input().split())
    m=list(map(int,input().split()))
    prev=0
    i=0
    while i<n:
        f-=min((m[i]-prev)*a,b)
        if f<=0: break
        prev=m[i]
        i+=1
    if i>=n: print("YES")
    else: print("NO")
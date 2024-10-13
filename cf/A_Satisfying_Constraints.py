import bisect
for _ in range(int(input())):
    mn=1
    mx=1e9
    equal=[]
    for _ in range(int(input())):
        a,x=map(int,input().split())
        if a==1: mn=max(mn,x)
        elif a==2: mx=min(mx,x)
        else: equal.append(x)
    equal.sort()
    # print(mn,mx,equal)
    res=mx-mn+1
    for it in equal:
        if it>=mn and it<=mx: res-=1
    print(max(0,res))
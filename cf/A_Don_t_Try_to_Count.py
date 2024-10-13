for _ in range(int(input())):
    n,m=map(int,input().split())
    x=input()
    y=input()
    cnt=0
    while y not in x:
        x+=x
        cnt+=1
        if len(x)>2*m: break
    if y in x: print(cnt)
    else: print(-1)
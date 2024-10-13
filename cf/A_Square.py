for _ in range(int(input())):
    mn=1001
    mx=-1001
    for _ in range(4):
        x,y=map(int,input().split())
        mx=max(mx,y)
        mn=min(mn,y)
    print(pow(mx-mn,2))
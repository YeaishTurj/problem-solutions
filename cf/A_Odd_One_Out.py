for _ in range(int(input())):
    a=map(int,input().split())
    res=0
    for it in a:
        res^=it
    print(res)
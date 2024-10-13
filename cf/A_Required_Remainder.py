for _ in range(int(input())):
    x,y,n=map(int,input().split())
    # k % x = y
    # k = k/x * x + y
    # 0<=k<=n, k=n
    i=n//x+1
    while x*i+y>n:
        i-=1
    print(x*i+y)
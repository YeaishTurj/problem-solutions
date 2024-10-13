for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[[int(it) for it in list(input())] for _ in range(n)]
    b=[[int(it) for it in list(input())] for _ in range(n)]
    # print(a,b)
    for i in range(n-1):
        for j in range(m-1):
            if a[i][j]!=b[i][j]:
                change=a[i][j]-b[i][j]
                if change==-1 or change==2:
                    a[i][j]=(a[i][j]+1)%3
                    a[i][j+1]=(a[i][j+1]+2)%3
                    a[i+1][j]=(a[i+1][j]+2)%3
                    a[i+1][j+1]=(a[i+1][j+1]+1)%3
                elif change==-2 or change==1:
                    a[i][j]=(a[i][j]+2)%3
                    a[i][j+1]=(a[i][j+1]+1)%3
                    a[i+1][j]=(a[i+1][j]+1)%3
                    a[i+1][j+1]=(a[i+1][j+1]+2)%3
    if a==b: print("YES")
    else: print("NO")
    # print("-------")
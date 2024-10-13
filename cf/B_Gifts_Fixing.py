for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    moves=0
    mnA=min(a)
    mnB=min(b)
    for i in range(n):
        moves+=a[i]-mnA+b[i]-mnB-min(a[i]-mnA,b[i]-mnB)
    print(moves)
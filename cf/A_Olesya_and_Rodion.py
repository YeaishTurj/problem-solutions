n,t=map(int,input().split())
if n==1 and t==10: print(-1)
else:
    if t==10: n-=1
    print(t,end="")
    for i in range(n-1):
        print(0,end="")

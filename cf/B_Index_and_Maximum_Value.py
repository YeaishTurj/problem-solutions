for _ in range(int(input())):
    n,m=map(int,input().split())
    mx=max(map(int,input().split()))
    for _ in range(m):
        pos,l,r=input().split()
        l,r=int(l),int(r)
        if l<=mx<=r:
            if pos=='+': mx+=1
            else: mx-=1
        print(mx,end=" ")

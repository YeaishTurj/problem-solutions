import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    ashbeNa=list(map(int,input().split()))
    pare=sorted(list(map(int,input().split())))
    noOfPareNa=n-k
    if noOfPareNa==0: print('1'*m)
    elif noOfPareNa==1:
        pareNa=n*(n+1)//2 - sum(pare)
        for it in ashbeNa:
            if it!=pareNa: print(0,end="")
            else: print(1,end="")
        print()
    else: print('0'*m)
        
    
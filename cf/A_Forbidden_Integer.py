import sys
input=sys.stdin.buffer.readline
for _ in range(int(input())):
    n,k,x=map(int,input().split())
    if x!=1:
        print("YES")
        print(n)
        print(*[1]*n)
    elif k==1: print("NO")
    elif k==2: 
        if n&1: print("NO")
        else:
            print("YES")
            print(n//2)
            print(*[2]*(n//2))
    else:
        print("YES")
        print(n//2)
        print(*[2]*((n//2)-1),end=" ")
        if n&1: print(3)
        else: print(2)


n,m=map(int,input().split())
right=1
for i in range(n):
    for j in range(m):
        if i%2==0: print('#',end="")
        else:
            # print(".",end="")
            if right and j==m-1: print("#",end="")
            elif right==0 and j==0: print("#",end="")
            else: print(".",end="")
    print()
    if i&1: right=right^1


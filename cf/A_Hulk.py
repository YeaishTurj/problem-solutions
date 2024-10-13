n=int(input())
for i in range(n):
    if i==n-1:
        if n&1: print("I hate it")
        else: print("I love it")
    elif i&1: print("I love that",end=" ")
    else: print("I hate that",end=" ")
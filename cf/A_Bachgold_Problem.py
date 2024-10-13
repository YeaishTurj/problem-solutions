n=int(input())
if n&1:
    k=n//2
    print(k)
    for i in range(k):
        if i==k-1: print(n-2*i,end=" ")
        else: print(2,end=" ")
else:
    print(n//2)
    for _ in range(n//2):
        print(2,end=" ")
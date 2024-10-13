for _ in range(int(input())):
    a,b=map(int,input().split())
    if a==b: print(0)
    elif a<b:
        if a%2==0 and b%2==0 or a&1 and b&1: print(2)
        else: print(1)
    else:
        if a%2==0 and b%2==0 or a&1 and b&1: print(1)
        else: print(2)

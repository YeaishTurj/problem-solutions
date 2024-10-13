for _ in range(int(input())):
    a,b=map(int,input().split())
    if a&1 and b&1 or a%2==0 and b%2==0: print("Bob")
    else: print("Alice")
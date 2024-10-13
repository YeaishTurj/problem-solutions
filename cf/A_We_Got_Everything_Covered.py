for _ in range(int(input())):
    n,k=map(int,input().split())
    for i in range(n):
        for j in range(k):
            print(chr(j+ord('a')),end="")
    print()
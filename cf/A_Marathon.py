for _ in range(int(input())):
    a=list(map(int,input().split()))
    print(sum(1 for it in a if it>a[0]))
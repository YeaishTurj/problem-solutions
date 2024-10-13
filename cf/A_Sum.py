for _ in range(int(input())):
    a=list(map(int,input().split()))
    a.sort()
    if a[2]==sum(a[:2]):
        print("YES")
    else: print("NO")
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    # print(sorted(a,reverse=True))
    a.sort(reverse=True)
    for it in a: print(it,end=" ")
    print()
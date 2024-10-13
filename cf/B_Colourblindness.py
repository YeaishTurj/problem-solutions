for _ in range(int(input())):
    n=int(input())
    a=list(input())
    b=list(input())
    # print(a,b)
    for i in range(n):
        if a[i] in "GB": a[i]='G'
        if b[i] in "GB": b[i]='G'
    if a==b: print("YES")
    else: print("NO")
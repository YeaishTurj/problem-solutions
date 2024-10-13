for _ in range(int(input())):
    w,h,n=map(int,input().split())
    for i in range(32):
        if w&(1<<i): break
    for j in range(32):
        if h&(1<<j): break
    if pow(2,i)*pow(2,j)>=n: print("YES")
    else: print("NO")
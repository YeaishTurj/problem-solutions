for _ in range(int(input())):
    a=list(map(int,input().split()))
    flag=0
    for i in range(7):
        total=0
        for j in range(3):
            if i&(1<<j): total+=a[j]
        if total>=10:
            flag=1
            break
    if flag: print("YES")
    else: print("NO")
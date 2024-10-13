for _ in range(int(input())):
    a=list(map(int,input().split()))
    win1=max(a[0],a[1])
    win2=max(a[2],a[3])
    a.sort()
    if max(win1,win2)==a[3] and min(win1,win2)==a[2]: print("YES")
    else: print("NO")
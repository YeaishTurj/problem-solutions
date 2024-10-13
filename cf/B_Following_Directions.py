for _ in range(int(input())):
    n=int(input())
    s=input()
    x=y=flag=0
    for it in s:
        if it=='U': y+=1
        elif it=='D': y-=1
        elif it=='R': x+=1
        else: x-=1
        if x==1 and y==1: flag=1
    if flag: print("YES")
    else: print("NO")
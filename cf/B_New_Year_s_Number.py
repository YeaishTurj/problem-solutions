for _ in range(int(input())):
    n=int(input())
    # n=x*2020+y*2021
    flag=x=0
    while x<=n//2020:
        if (n-x*2020)%2021==0 and (n-x*2020)//2021>=0:
            flag=1
            break
        x+=1
    if flag: print("YES")
    else: print("NO")
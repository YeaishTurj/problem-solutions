for _ in range(int(input())):
    a,b=map(int,input().split())
    print(max(pow(min(a,b)*2,2), pow(max(a,b),2)))
for _ in range(int(input())):
    h,m=map(int,input().split())
    if h==0 and m==0: print(0)
    else:
        mm=60-m
        hh=24-h-1
        print(hh*60+mm)
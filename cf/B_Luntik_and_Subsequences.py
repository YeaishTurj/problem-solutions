for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    one=a.count(1)
    zero=a.count(0)
    if one==0: print(0)
    elif one and zero==0: print(one)
    else: print(one*pow(2,zero))
    # 2300 230 230 23
    #2-4
    #102030 12030 1230 123 10230 1023 10203 1203
    #3
    # print("--------------")
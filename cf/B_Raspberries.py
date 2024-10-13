import math
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    mn=2e9
    prod=1
    two=0
    one=0
    for it in a:
        prod*=it
        mn=min(mn, k-(it-1)%k-1)
        if k==4:
            if it%k==1: one+=1
            elif it%k==2: two+=1
    if k==4: 
        # 1*2=(1+1)*2 , 5*10=(5+1)*10
        if two and one: mn=min(mn, 1)
        # 2*2, 6*6, 10*10
        if two>1: mn=0
        # 1*1=(1+1)(1+1) , 5*5=(5+1)(5+1)
        if one>1: mn=min(mn, 2)
    if prod%k==0: mn=0
    print(mn)
    # print("-----------")
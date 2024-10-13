for _ in range(int(input())):
    n=int(input())
    i=2
    cnt2=cnt3=0
    while n:
        while n%i==0:
            if i==2: cnt2+=1
            else: cnt3+=1
            n//=i
        i+=1
        if i==4: break
    
    if n!=1 or cnt3<cnt2: print(-1)
    else:
        # print(cnt2,cnt3)
        # 2 2 2 2 2 2 2 2 
        # 3 3 3 3 3 3 3 3 3 3
        print(2*cnt3-cnt2)
for _ in range(int(input())):
    x,y,k=map(int,input().split())
    if(y<=x): print(x) # 0 -->   y  -->   x
    else:
        if k>=y-x: print(y) # 0 --> x -->  y
        else:
            time=y+y-(x+k) # 0 --> x --> x+k(chest) --> y -->x+k
            print(time)
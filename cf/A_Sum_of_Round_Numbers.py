for _ in range(int(input())):
    n=input()
    i=len(n)-1
    res=[]
    for it in n:
        if it!='0':
            res.append((it,i))
        i-=1
    print(len(res))
    for it in res:
        print(it[0],end="")
        for jt in range(it[1]): print("0",end="")
        print(end=" ")
    print()
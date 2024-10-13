for _ in range(int(input())):
    n=input()
    hash={}
    ballon=0
    for it in input():
        if it in hash:
            ballon+=1
        else:
            hash[it]=1
            ballon+=2
    print(ballon)
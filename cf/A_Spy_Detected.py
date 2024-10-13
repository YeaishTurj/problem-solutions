for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    hash={}
    for it in a:
        if it in hash: hash[it]+=1
        else: hash[it]=0
    for i in range(n):
        if hash[a[i]]==0:
            print(i+1)
            break
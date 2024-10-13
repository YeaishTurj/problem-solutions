for _ in range(int(input())):
    n,k=map(int,input().split())
    s=input()
    hash={}
    for it in s:
        if it in hash: hash[it]+=1
        else: hash[it]=1
    odd=0
    for it in hash:
        odd+=hash[it]&1
    even=len(hash)-odd
    mn=min(odd,k)
    odd-=mn
    k-=mn
    if odd>1:
        print("NO")
    else:
        print("YES")
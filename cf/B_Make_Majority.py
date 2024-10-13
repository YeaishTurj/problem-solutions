for _ in range(int(input())):
    n=int(input())
    s=input()
    l,one,zero=0,0,0
    while l<n:
        r=l
        while r<n and s[r]=='0': r+=1
        if r==l:
            one+=1
            l+=1
        else:
            zero+=1
            l=r
    res="Yes" if one>zero else "No"
    print(res)
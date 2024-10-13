for _ in range(int(input())):
    s=input()
    l=r=0
    while r<len(s) and s[l]==s[r]: r+=1
    if r==len(s): print("NO")
    else:
        print("YES")
        for i in range(len(s)):
            if i==l: print(s[r],end="")
            elif i==r: print(s[l],end="")
            else: print(s[i],end="")
        print()
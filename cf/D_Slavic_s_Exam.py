for _ in range(int(input())):
    s=list(input())
    t=list(input())
    i=j=0
    while i<len(s):
        if j<len(t) and s[i]==t[j]:
            i+=1
            j+=1
        elif j<len(t) and s[i]!=t[j]:
            if s[i]=='?':
                s[i]=t[j]
                i+=1
                j+=1
            else: i+=1
        else: i+=1
    if j==len(t):
        print("YES")
        for it in s:
            print(it,end="") if it!='?' else print("t",end="")
        print()
    else: print("NO")